package bing;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.ArrayList;
import java.util.List;

import pojo.Bing;
import pojo.Resource;
import pojo.ResourceSet;

import com.fasterxml.jackson.core.JsonProcessingException;
import com.fasterxml.jackson.databind.ObjectMapper;

public class BingJsonAPI {

	private static String bingMapsKey = "AvQXdJy1sxa5GerehrQvNK2yGtlyh1T_gb0oyruUz3n8-Ylo_MrDiz0-W7WmNXfq";

	private static ObjectMapper mapper = new ObjectMapper();

	public String getLocationData(double latitude, double longitude) {
		String url = "http://dev.virtualearth.net/REST/v1/Locations/"
				+ latitude + "," + longitude + "?o=json&key=" + bingMapsKey;
		return sendGet(url);
	}

	public String getLocationName(double latitude, double longitude) {

		// This implementation assumes that out of all the Resources returned as
		// a response, the first one is the exact match

		String response;
		try {
			String url = "http://dev.virtualearth.net/REST/v1/Locations/"
					+ latitude + "," + longitude + "?o=json&key=" + bingMapsKey;

			response = sendGet(url);

			// convert json response to POJO
			Bing bingRootObj = mapper.readValue(response, Bing.class);

			if (bingRootObj.getResourceSets().size() != 0 && bingRootObj.getResourceSets().get(0).getResources().size() != 0)
				return bingRootObj.getResourceSets().get(0).getResources()
						.get(0).getName();
			else
				return null;

		} catch (Exception e) {

			e.printStackTrace();

		}
		return null;
	}

	public List getNearbyPlacesOfInterest(double latitude, double longitude) {
		// TODO
		// This is a dummy Implementation
		String response;
		try {
			String url = "http://dev.virtualearth.net/REST/v1/Locations/"
					+ latitude + "," + longitude + "?o=json&key=" + bingMapsKey;

			response = sendGet(url);

			// convert json response to POJO
			Bing bingRootObj = mapper.readValue(response, Bing.class);

			if (bingRootObj != null) {
				List<String> siteNames = new ArrayList<String>();
				// get all resourceSets
				List<ResourceSet> resourceSets = bingRootObj.getResourceSets();
				// traverse through the resourceSets and get resources for each
				// resourceSet
				for (ResourceSet r : resourceSets) {
					List<Resource> rs = r.getResources();
					// traverse through the resources and get the ultimate
					// "Resource"
					for (Resource rss : rs) {
						siteNames.add(rss.getName());
					}
				}
				return siteNames;
			} else
				return null;

		} catch (Exception e) {

			e.printStackTrace();

		}
		return null;
	}

	public long getDistanceBetween(double latitude1, double longitude1,
			double latitude2, double longitude2) {
		// TODO
		return 0;
	}

	// This method acts as a simple HTTP client that does the REST request and
	// returns the json response
	private String sendGet(String url) {
		StringBuffer response = null;
		try {
			URL obj = new URL(url);

			HttpURLConnection con = (HttpURLConnection) obj.openConnection();

			con.setRequestMethod("GET");
			con.setRequestProperty("Accept", "application/json");

			System.out.println("Sending 'GET' request to URL : " + url);
			int responseCode = con.getResponseCode();
			System.out.println("Response Code : " + responseCode);

			if (responseCode != 200) {
				throw new RuntimeException("Failed : HTTP error code : "
						+ responseCode);
			}

			BufferedReader in = new BufferedReader(new InputStreamReader(
					con.getInputStream()));
			String inputLine;
			response = new StringBuffer();
			while ((inputLine = in.readLine()) != null) {
				response.append(inputLine);
			}
		} catch (Exception e) {
			e.getStackTrace();
		}

		return response.toString();

	}

	// Utility method to beautify JSON response
	public static void prettyPrint(Object obj) {
		// pretty print json

		try {
			System.out.println(mapper.writerWithDefaultPrettyPrinter()
					.writeValueAsString(obj));
		} catch (JsonProcessingException e) {
			e.printStackTrace();
		}
	}

	
	//Test method.. Use it to test code 
	public static void main(String[] args) {

		BingJsonAPI testObj = new BingJsonAPI();

		String response;
		try {

			response = testObj.getLocationData(12.972421, 77.593621);

			// convert json response to POJO
			Bing bingRootObj = mapper.readValue(response, Bing.class);
			prettyPrint(bingRootObj);

			// get all resourceSets
			List<ResourceSet> resourceSets = bingRootObj.getResourceSets();
			// traverse through the resourceSets and get resources for each
			// resourceSet
			for (ResourceSet r : resourceSets) {
				List<Resource> rs = r.getResources();
				// traverse through the resources and get the ultimate
				// "Resource"
				for (Resource rss : rs) {
					System.out.println(rss.getName());
				}
			}

			System.out.println(bingRootObj.getBrandLogoUri());

		} catch (Exception e) {

			e.printStackTrace();

		}
	}
}
