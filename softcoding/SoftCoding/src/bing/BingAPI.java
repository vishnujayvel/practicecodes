package bing;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;

public class BingAPI {

	private static String bingMapsKey = "AvQXdJy1sxa5GerehrQvNK2yGtlyh1T_gb0oyruUz3n8-Ylo_MrDiz0-W7WmNXfq";

	public static void main(String[] args) {

		BingAPI blf = new BingAPI();
		blf.getLocationData(47.64054, -122.12934);
	}

	public void getLocationData(double latitude, double longitude) {
		String url = "http://dev.virtualearth.net/REST/v1/Locations/"
				+ latitude + "," + longitude + "?o=xml&key=" + bingMapsKey;
		String rawData = sendGet(url);
		System.out.println("result\n" + rawData);
	}

	private String sendGet(String url) {
		StringBuffer response = null;
		try {
			URL obj = new URL(url);

			HttpURLConnection con = (HttpURLConnection) obj.openConnection();

			int responseCode = con.getResponseCode();
			System.out.println("\nSending 'GET' request to URL : " + url);
			System.out.println("Response Code : " + responseCode);

			if (responseCode != 200)
				return "";

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

		int start = response.indexOf("<Name", 0);
		int end = response.indexOf("</Name", start + 5);

		return response.substring(start + 6, end);

	}
}
