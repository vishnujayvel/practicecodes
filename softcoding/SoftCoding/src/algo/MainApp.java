package algo;

import java.util.List;

import bing.BingJsonAPI;

public class MainApp {
	
	
	public static void main(String[] args) {
		double latitude,longitude;
		latitude = 12.972421;
		longitude = 77.593621;
		BingJsonAPI api = new BingJsonAPI();
		
		//this is how you should use the API
		String locationName = api.getLocationName(latitude, longitude);
		List<String> nearbyPlaces = api.getNearbyPlacesOfInterest(latitude, longitude);
		
		System.out.println("Loaction is : "+locationName);
		System.out.println("Nearby places ...");
		for(String place : nearbyPlaces){
			System.out.println(nearbyPlaces);
		}
	}
}
