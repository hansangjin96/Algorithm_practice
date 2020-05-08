package com.course.pracapi;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

import org.json.JSONArray;

import java.text.ParseException;
import java.util.List;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;
import retrofit2.Retrofit;
import retrofit2.converter.gson.GsonConverterFactory;

public class MainActivity extends AppCompatActivity {

    private TextView textResult;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        //텍스트 뷰에 표시
        textResult = findViewById(R.id.result);

        //Retrofit으로 파싱
        Retrofit retrofit = new Retrofit.Builder()
                .baseUrl("https://jsonplaceholder.typicode.com/")
                .addConverterFactory(GsonConverterFactory.create())
                .build();

        //users에 들어가서 값읽어오는거?
        JsonPlaceHolderApi jsonPlaceHolderApi = retrofit.create(JsonPlaceHolderApi.class);

        Call<List<Post>> call = jsonPlaceHolderApi.getPosts();
        call.enqueue(new Callback<List<Post>>() {
            @Override
            public void onResponse(Call<List<Post>> call, Response<List<Post>> response) {

                //접속 실패시
                if(!response.isSuccessful()){
                    textResult.setText(response.code());
                    return;
                }

                List<Post> posts = response.body();

                //출력
                for(Post post: posts){
                    String content = "";
                    content+="ID : "+post.getId()+"\n";
                    content+="name : "+post.getName()+"\n";
                    content+="username : "+post.getUsername()+"\n";
                    content+="email : "+post.getEmail()+"\n";
                    content+="address:\n\tStreet : "+post.getAddressStreet()+"\n";
                    content+="\tSuite : "+post.getAddressSuite()+"\n";
                    content+="\tStreet : "+post.getAddressStreet()+"\n";
                    content+="\tZipcode : "+post.getAddressZipcode()+"\n";
                    content+="\tgeo \n\t\tLat: "+post.getAddressGeoLat()+"\n";
                    content+="\t\tLng : "+post.getAddressGeoLng()+"\n";
                    content+="phone : "+post.getPhone()+"\n";
                    content+="website : "+post.getWebsite()+"\n";
                    content+="Company:\n\tName : "+post.getCompanyName()+"\n";
                    content+="\tCatchPhrase : "+post.getCompanyCatchPhrase()+"\n";
                    content+="\tBs : "+post.getCompanyBs()+"\n\n";
                    textResult.append(content);
                }
            }

            @Override
            public void onFailure(Call<List<Post>> call, Throwable t) {
                textResult.setText(t.getMessage());
            }
        });
    }
}
