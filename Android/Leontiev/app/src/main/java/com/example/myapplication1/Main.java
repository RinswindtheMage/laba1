package com.example.myapplication1;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

import androidx.appcompat.app.AppCompatActivity;

public class Main extends Activity
    implements View.OnClickListener{
        @Override
        protected void onCreate (Bundle savedInstanceState){
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main_act);
            Button button1=(Button) findViewById(R.id.btn1);
            Button button2=(Button) findViewById(R.id.btn2);
            Button button3=(Button) findViewById(R.id.btn3);
            Button button4=(Button) findViewById(R.id.btn4);
            button1.setOnClickListener(this);
            button2.setOnClickListener(this);
            button3.setOnClickListener(this);
            button4.setOnClickListener(this);
    }
    @Override
    public void onClick(View v){
        Button b=(Button) v;
        b.setText(R.string.afterClick);
    }
}
