package com.enarch.bb8;

import android.app.Activity;

import android.bluetooth.BluetoothAdapter;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;


public class MainActivity extends Activity {

	private BluetoothAdapter btAdapter;
	
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        
        setupSoundButton1();
        setupSoundButton2();
        setupSoundButton3();
    }

    
    private void setupSoundButton1() {
    	// Get Refrance to the button
    	
    	//set click listener to run code
    }
    
    private void setupSoundButton2() {
    
    }

    private void setupSoundButton3() {
    	
    }
    
    
    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.main, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();
        if (id == R.id.discoverable) {
            return true;
        }
        if (id == R.id.insecure_connect_scan) {
        	return true;
        	
        }
        if (id == R.id.secure_connect_scan){
        	return true;
        }
        return super.onOptionsItemSelected(item);
    }
}
