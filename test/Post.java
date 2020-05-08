package com.course.pracapi;

import com.google.gson.annotations.SerializedName;

import org.json.JSONObject;

import java.util.ArrayList;
import java.util.List;

public class Post {
    private int id;
    private String name;
    private String username;
    private String email;
    private Address address;

    private String phone;
    private String website;
    private Company company;

    public int getId(){
        return id;
    }

    public String getName(){
        return  name;
    }

    public String getUsername(){
        return  username;
    }

    public String getEmail(){
        return  email;
    }

    public Address getAddress(){
        return  address;
    }

    public String getAddressStreet(){
        return address.street;
    }
    public String getAddressSuite(){
        return address.suite;
    }
    public String getAddressCity(){
        return address.city;
    }
    public String getAddressZipcode(){
        return address.zipcode;
    }

    public String getPhone(){ return phone; }

    public String getWebsite(){ return website; }

    public String getAddressGeoLat(){ return address.geo.lat; }
    public String getAddressGeoLng(){ return address.geo.lng; }

    public Company getCompany(){ return company; }

    public String getCompanyName(){ return company.name; }
    public String getCompanyCatchPhrase(){ return company.catchPhrase; }
    public String getCompanyBs(){ return company.bs; }

    class Address{
        public String street;
        public String suite;
        public String city;
        public String zipcode;
        private Geo geo;
    }

    class Company{
        public String name;
        public String catchPhrase;
        public String bs;
    }

    class Geo{
        public String lat;
        public String lng;
    }
}