
package pojo;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.annotation.Generated;
import com.fasterxml.jackson.annotation.JsonAnyGetter;
import com.fasterxml.jackson.annotation.JsonAnySetter;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;

@JsonInclude(JsonInclude.Include.NON_NULL)
@Generated("com.googlecode.jsonschema2pojo")
@JsonPropertyOrder({
    "__type",
    "bbox",
    "name",
    "point",
    "address",
    "confidence",
    "entityType",
    "geocodePoints",
    "matchCodes"
})
public class Resource {

    @JsonProperty("__type")
    private String __type;
    @JsonProperty("bbox")
    private List<Double> bbox = new ArrayList<Double>();
    @JsonProperty("name")
    private String name;
    @JsonProperty("point")
    private Point point;
    @JsonProperty("address")
    private Address address;
    @JsonProperty("confidence")
    private String confidence;
    @JsonProperty("entityType")
    private String entityType;
    @JsonProperty("geocodePoints")
    private List<GeocodePoint> geocodePoints = new ArrayList<GeocodePoint>();
    @JsonProperty("matchCodes")
    private List<String> matchCodes = new ArrayList<String>();
    private Map<String, Object> additionalProperties = new HashMap<String, Object>();

    @JsonProperty("__type")
    public String get__type() {
        return __type;
    }

    @JsonProperty("__type")
    public void set__type(String __type) {
        this.__type = __type;
    }

    @JsonProperty("bbox")
    public List<Double> getBbox() {
        return bbox;
    }

    @JsonProperty("bbox")
    public void setBbox(List<Double> bbox) {
        this.bbox = bbox;
    }

    @JsonProperty("name")
    public String getName() {
        return name;
    }

    @JsonProperty("name")
    public void setName(String name) {
        this.name = name;
    }

    @JsonProperty("point")
    public Point getPoint() {
        return point;
    }

    @JsonProperty("point")
    public void setPoint(Point point) {
        this.point = point;
    }

    @JsonProperty("address")
    public Address getAddress() {
        return address;
    }

    @JsonProperty("address")
    public void setAddress(Address address) {
        this.address = address;
    }

    @JsonProperty("confidence")
    public String getConfidence() {
        return confidence;
    }

    @JsonProperty("confidence")
    public void setConfidence(String confidence) {
        this.confidence = confidence;
    }

    @JsonProperty("entityType")
    public String getEntityType() {
        return entityType;
    }

    @JsonProperty("entityType")
    public void setEntityType(String entityType) {
        this.entityType = entityType;
    }

    @JsonProperty("geocodePoints")
    public List<GeocodePoint> getGeocodePoints() {
        return geocodePoints;
    }

    @JsonProperty("geocodePoints")
    public void setGeocodePoints(List<GeocodePoint> geocodePoints) {
        this.geocodePoints = geocodePoints;
    }

    @JsonProperty("matchCodes")
    public List<String> getMatchCodes() {
        return matchCodes;
    }

    @JsonProperty("matchCodes")
    public void setMatchCodes(List<String> matchCodes) {
        this.matchCodes = matchCodes;
    }

    @JsonAnyGetter
    public Map<String, Object> getAdditionalProperties() {
        return this.additionalProperties;
    }

    @JsonAnySetter
    public void setAdditionalProperties(String name, Object value) {
        this.additionalProperties.put(name, value);
    }

}
