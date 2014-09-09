<?php
class Gamemodel extends CI_Model {

  function __construct()
  {
    parent::__construct();
  }

  function getLevelUrlMap($userCharacter){
  
  	$levelUrlsArray=array();

  	//get level-url map from db
	if($userCharacter=='sherlock'){
		$sql = "select url from sherlock_level_url_map";  
	}
	else if($userCharacter=='watson'){
		$sql = "select url from watson_level_url_map";  
	}
	$query=$this->db->query($sql);
   	if($result=$query->result_array()){
   		//construct map
   		foreach($result as $row){
   			array_push($levelUrlsArray, $row['url']);
   		}   		
   	}
   	return $levelUrlsArray;
  }

  function getUserLevelAndCharacter($kid){
	
	$sql = "select teamname,sherlock_kid,watson_kid,sherlock_level,watson_level from teams 
	where sherlock_kid=? OR watson_kid=?";
	$query=$this->db->query($sql,array($kid,$kid));
	$user=array();
	if($row=$query->row_array()){
		
		if($row['sherlock_kid']==$kid){
			//user is sherlock
			$user['character']='sherlock';
			$user['level']=$row['sherlock_level'];
			if($row['watson_kid']!=null && $row['watson_kid']!=''){
				$user['teammateCharacter']='watson';
				$user['teammateLevel']=$row['watson_level'];		
			}
			else{
				$user['teammateCharacter']=null;
				$user['teammateLevel']=null;
			}
			
		}
		else{
			//user is watson
			$user['character']='watson';
			$user['level']=$row['watson_level'];
			if($row['sherlock_kid']!=null && $row['sherlock_kid']!=''){
				$user['teammateCharacter']='sherlock';
				$user['teammateLevel']=$row['sherlock_level'];
			}
			else{
				$user['teammateCharacter']=null;
				$user['teammateLevel']=null;
			}
		}
		$user['teamname']=$row['teamname'];
		return $user;
	
	}
	else{
		
		return null;
		
	}
	

  }


  function getContents($levelNo,$userCharacter,$teammateLevelNo,$teammateUserCharacter,$teamname){

  	$data=array();
  	$baseUrl=base_url();
  	$dynamicGameContent='';

  	$formMarkup='
	<center>
		<form method="post" action="'.$baseUrl.'index.php/judgeController/validateAnswer">
			<input type="hidden" name="level" id="level" value="'.$levelNo.'">
			<input type="text" name="answer" id="answer">
			<input type="submit" value="Submit!" >
		</form>
	</center>';


	if($userCharacter=='sherlock'){
	
		//sherlock level contents
		switch($levelNo){

	  		case 1 :
	  			$dynamicGameContent=$this->getSherlockCarouselMarkup($levelNo).$formMarkup;
	  			break;
	  		case 2 :
				$BASE=base_url();
				$splDivMarkup='
					<div id="splQsAnsDiv">
						<div id="splDiv1">
							<img src="'.$BASE.'assets/img/sherlock/level'.$levelNo.'/clue1.png" height="40%" width="40%">
							<input type="text" id="answer1" /><input type="submit" class="specialAnswerSubmitButton" data-level="2" data-specialqsno="1" value="Answer!" /><br />
						</div>
						<div id="splDiv2">
							<img src="'.$BASE.'assets/img/sherlock/level'.$levelNo.'/clue2.png" height="40%" width="40%">
							<input type="text" id="answer2" /><input type="submit" class="specialAnswerSubmitButton" data-level="2" data-specialqsno="2" value="Answer!" /><br />
						</div>
						<div id="splDiv3">
							<img src="'.$BASE.'assets/img/sherlock/level'.$levelNo.'/clue3.png" height="40%" width="40%">
							<input type="text" id="answer3" /><input type="submit" class="specialAnswerSubmitButton" data-level="2" data-specialqsno="3" value="Answer!" /><br />
						</div>
						<div id="splDiv4">
							<img src="'.$BASE.'assets/img/sherlock/level'.$levelNo.'/clue4.png" height="40%" width="40%">
							<input type="text" id="answer4" /><input type="submit" class="specialAnswerSubmitButton" data-level="2" data-specialqsno="4" value="Answer!" /><br />
						</div>
					</div>
				';
	  			$dynamicGameContent=$this->getSherlockCarouselMarkup($levelNo).$splDivMarkup.$formMarkup;
	  			break;
	  		case 3 :
	  			$dynamicGameContent=$this->getSherlockCarouselMarkup($levelNo).$formMarkup;
	  			break;
			case 4 :
	  			$dynamicGameContent=$this->getSherlockCarouselMarkup($levelNo).$formMarkup;
	  			break;
			case 5 :
	  			$dynamicGameContent=$this->getSherlockCarouselMarkup($levelNo).$formMarkup;
	  			break;
			
	 
  		}
		
		//dummy popup for link onClick
		
		//$popupinkMarkup='<a href="#" class="showModalLink" data-imgLink="'.base_url().'assets/img/sherlock/level2/spl/'.'someimg.png'">Click here for clue!</a>';

	}
	else if($userCharacter=='watson'){
	
		//watson level contents
		switch($levelNo){

	  		case 1 :
	  			$dynamicGameContent=$this->getWatsonCarouselMarkup($levelNo).$formMarkup;
	  			break;
	  		case 2 :
	  			$dynamicGameContent=$this->getWatsonCarouselMarkup($levelNo).$formMarkup;
	  			break;
	  		case 3 :
	  			$dynamicGameContent=$this->getWatsonCarouselMarkup($levelNo).$formMarkup;
	  			break;
			case 4 :
	  			$dynamicGameContent=$this->getWatsonCarouselMarkup($levelNo).$formMarkup;
	  			break;
			case 5 :
	  			$dynamicGameContent=$this->getWatsonCarouselMarkup($levelNo).$formMarkup;
	  			break;
	 
  		}

	}
	else{

		
		$dynamicGameContent=$levelUrls[0].$level.'404 :|';

	}

  	

	
	

	$data['leftDiv']='

	<div class="span2">  
        <div class="k-widget">
          <div id="k-widget-title">Team : '.$teamname.'</div>
            <h2 style="color:white">
			Your level : '.$levelNo.'
            </h2>
			<h2 style="color:white">
			'.$teammateUserCharacter.'\'s level : '.$teammateLevelNo.'
			</h2>
        </div>               
    </div><!--/span2-->
  		';

  	$data['centerDiv']='

  		<div class="span8">
	        <!--column 2 row 1-->
	        <div id="Home" class="well k-border ros-tab">
	          <h2 class="k-heading k-title">
	            Home
	          </h2>
	          <div class="k-content">
	            '.$dynamicGameContent.'
	          </div>
	          
	        </div><!--Home-->
	        <div id="Rules" class="well k-border ros-tab">
	          <h2 class="k-heading k-title">
	            Rules
	          </h2>
	          <div class="k-content">

	        </div>
	        
	      </div><!--Rules-->
	      <div id="TheGame" class="well k-border ros-tab">
	        <h2 class="k-heading k-title">
	          The Game
	        </h2>
	        <div class="k-content">
	          
	           
	         </div>
	         
	       </div>
	       <!--Game-->
	       <div id="Forum" class="well k-border ros-tab">
	         <h2 class="k-heading k-title">
	           Forum
	         </h2>
	         <div class="k-content">
	           
	         </div>
	         
	       </div><!--Forum-->
	       <div id="Contact" class="well k-border ros-tab">
	         <h2 class="k-heading k-title">
	           Contact

	         </h2>
	         
	        <div class="k-content">

	        	Forum Page
	              
	        </div>

	       </div><!--contact-->

			<div id="ScoreBoard" class="well k-border ros-tab">
			<h2 class="k-heading k-title">LeaderBoard</h2>
			<div class="k-content">
			'.$this->getLeaderboardMarkup().'

			</div>

			</div><!--leaderboard-->

			</div><!--/span8-->

  	';
	
	$sherlockImg=base_url().'assets/img/sherlock/sherlock.png';
	$watsonImg=base_url().'assets/img/watson/watson.png';
	
	$userImg= $userCharacter=='sherlock'?$sherlockImg:$watsonImg;
  	$data['rightDiv']='
  		<div class="span2">  
	        <div class="k-widget">
	          <div id="k-widget-title">Your Role</div>
	            <p>
	              <img src="'.$userImg.'">
	            </p>
	        </div>             
	    </div><!--/span2-->    
  	';


  	return $data;
  }
  
  function getSherlockCarouselMarkup($level){
		$level1=array('1color.png',
						'2color.png',
						'3color.png',
						'4color.png',
						'5color.png',
						'6color.png',
						'7color.png',
						'8color.png');
						
		$level2=array('l3cover.png',
						'l3p1.png',
						'l3p2.png',
						'l3p3.png',
						'l3p4.png',
						'l3p5.png',
						'l3p6.png',
						);
						
		$level3=array('l5cover.png',
						'l5p1.png',
						'l5p2.png',
						'l5p3.png',
						'l5p4.png',
						'l5p5.png',
						'l5p6.png',
						'l5p7.png',
						'l5p8.png',
						'l5p9.png',
						'l5p10.png',
						'l5p11.png',
						'zzz.png',
						);
						
		$level4=array('l7cover.png',
						'l7p1.png',
						'l7p2.png',
						'l7p3.png',
						);
						
		$level5=array('l9p1.png',
						'l9p2.png',
						'l9p3.png',
						'l9p4.png',
						'l9p5.png',
						'l9p6.png',
						'l9p7.png',
						'l9p8.png',
						'l9p9.png',
						'l9p10.png');
						
		$temp="level".$level;
		$imagesInPage=$$temp;
			$BASE=base_url();
			$firstItemGenerated=false;
			$fragment="";
			foreach ($imagesInPage as $image) {
				if($firstItemGenerated == false){ //class=active item
					$fragment.="
					   <div class=\"active item\">
				       	<center><img src=\"".$BASE."assets/img/sherlock/level".$level."/pics/$image\" height='40%' width='40%'></center>
				       </div>";
				    $firstItemGenerated = true;
				}
				else{
					$fragment.="
					   <div class=\"item\">
				       	<center><img src=\"".$BASE."assets/img/sherlock/level".$level."/pics/$image\" height='40%' width='40%' ></center>
				       </div>";
				}
			}
			
			$content='<div id="myCarousel" class="carousel slide">
                <div class="carousel-inner">'.$fragment.' </div>
                <a class="left carousel-control" href="#myCarousel" data-slide="prev">&lsaquo;</a>
                <a class="right carousel-control" href="#myCarousel" data-slide="next">&rsaquo;</a>
              </div>';
		return $content;
			
  }
  
  function getWatsonCarouselMarkup($level){
		
		$level1=array('l2cover.png',
						'l2p1.png',
						'l2p2.png',
						'l2p3.png',
						'l2p4.png',
						'l2p5.png',
						'l2p6.png',
						'l2p7.png',
						'l2p8.png',
						'l2p9.png',
						'l2p10.png',
						'zzz.png',
						);
		
		$level2=array('l4cover.png',
						'l4p1.png',
						'l4p2.png',
						'l4p3.png',
						'l4p4.png',
						'l4p5.png',
						'l4p6.png',
						'zzz.png',
						);
						
		$level3=array('l6cover.png',
						'l6p1.png',
						'l6p2.png',
						'l6p3.png',
						'l6p4.png',
						'l6p5.png',
						);
						
		$level4=array('l8cover.png',
						'l8p7.png',
						'l8p1.png',
						'l8p2.png',
						'l8p3.png',
						'l8p4.png',
						'l8p5.png',
						'l8p6.png'
						
						);
		$level5=array('l10cover.png',
						'l10p1.png',
						'l10p2.png',
						'l10p3.png',
						'l10p4.png',
						'l10p5.png',
						'l10p6.png',
					);
						
		$temp="level".$level;
		$imagesInPage=$$temp;
			$BASE=base_url();
			$firstItemGenerated=false;
			$fragment="";
			foreach ($imagesInPage as $image) {
				if($firstItemGenerated == false){ //class=active item
					$fragment.="
					   <div class=\"active item\">
				       	<center><img src=\"".$BASE."assets/img/watson/level".$level."/pics/$image\" height='40%' width='40%'></center>
				       </div>";
				    $firstItemGenerated = true;
				}
				else{
					$fragment.="
					   <div class=\"item\">
				       	<center><img src=\"".$BASE."assets/img/watson/level".$level."/pics/$image\" height='40%' width='40%'></center>
				       </div>";
				}
			}
			if($level==1){//include anatomy img here for Level-2 (watson level-1)
					$fragment.="<div class=\"item\">
				       	
				       
					   <div style=\"text-align:center; width:720px; margin-left:auto; margin-right:auto;\">
						<img src=\"".$BASE."assets/img/watson/level".$level."/rsz_level2anatomy.png\" usemap=\"#watsonmap\" border=\"0\" width=\"720\" height=\"430\" alt=\"\" />
						<map id=\"watsonmap\" name=\"watsonmap\">
						<area shape=\"rect\" coords=\"22,182,107,242\" href=\"#\" onclick=\"javascript:void window.open('".base_url()."assets/img/watson/level1/symp2.png','1357873209633','width=700,height=500,toolbar=0,menubar=0,location=0,status=1,scrollbars=1,resizable=1,left=0,top=0');return false\" alt=\"\" title=\"\"    />
						<area shape=\"rect\" coords=\"179,120,259,165\"  href=\"#\" onclick=\"javascript:void window.open('".base_url()."assets/img/watson/level1/symp3.png','1357873209633','width=700,height=500,toolbar=0,menubar=0,location=0,status=1,scrollbars=1,resizable=1,left=0,top=0');return false\" alt=\"\" title=\"\"     />
						<area shape=\"rect\" coords=\"357,319,437,370\"  href=\"#\" onclick=\"javascript:void window.open('".base_url()."assets/img/watson/level1/symp1.png','1357873209633','width=700,height=500,toolbar=0,menubar=0,location=0,status=1,scrollbars=1,resizable=1,left=0,top=0');return false\" alt=\"\" title=\"\"     />
						<area shape=\"rect\" coords=\"617,160,697,211\" href=\"#\" onclick=\"javascript:void window.open('".base_url()."assets/img/watson/level1/symp4.png','1357873209633','width=700,height=500,toolbar=0,menubar=0,location=0,status=1,scrollbars=1,resizable=1,left=0,top=0');return false\" alt=\"\" title=\"\"   />
						</map>
						</div>
						</div>
            ";
			//<a href="#" class="showModalLink" data-imgLink="'.base_url().'assets/img/sherlock/level2/spl/'.'someimg.png'">Click here for clue!</a>
			}
			$content='<div id="myCarousel" class="carousel slide">
                <div class="carousel-inner">'.$fragment.' </div>
                <a class="left carousel-control" href="#myCarousel" data-slide="prev">&lsaquo;</a>
                <a class="right carousel-control" href="#myCarousel" data-slide="next">&rsaquo;</a>
              </div>';
		return $content;
			
  }
  
  function getLeaderboardMarkup(){
		
		$sql="select teamname,sherlock_level+watson_level as level from teams order by level desc, timestamp asc";
		$query=$this->db->query($sql);
		$board= "
		<table style=\"color:black\" id=\"background-image\" class=\"table table-striped\">
		<tr>
		<th>Rank</th>
		<th>Team</th>
		</tr>
		";
		$i=1;
		$result=$query->result_array();
		foreach($result as $row)
		{
		
			if($row['teamname']==null)
				$row['name']="not updated";
			$board.= "
			<tr>
			";
			$board.="
			<td>
			" . $i . "
			</td>
			";
			$board.="
			<td>
			" . $row['teamname'] . "
			</td>
			";
			$board.="
			</tr>
			";
			$i++;
			
			if($i>10)
				break;
		}
		$board.="
		</table>
		";
		
		return $board;
  
  }

}