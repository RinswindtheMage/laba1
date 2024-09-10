package com.example.myapplication;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class Main extends Activity {
    TextView textView1, textView2;
    Button buttonAdd, buttonCopy;

    @Override
    protected void onCreate(Bundle savedInstanceState){
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main_act);
        textView1=(TextView)findViewById(R.id.tv1);
        textView2=(TextView)findViewById(R.id.tv2);
        buttonAdd= (Button) findViewById(R.id.btn1);
        buttonCopy= (Button) findViewById(R.id.btn2);
    }

    public void onAdd(View view){
        String s = textView1.getText().toString();
        textView1.setText(s+'*');
    }

    public void onCopy(View view){
        //String s1="Вторая надпись: " + textView2.getText().toString();
        //String s2=", первая кнопка: " + buttonAdd.getText().toString();
        String s = textView1.getText().toString();
        textView2.setText(s);
    }
}
