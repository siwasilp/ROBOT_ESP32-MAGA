void loop_1()
{
  char user_input;

  while (Serial.available())
  {
    user_input = Serial.read(); //Read user input and trigger appropriate function
    digitalWrite(EN_PIN_1, HIGH);
    digitalWrite(EN_PIN_2, HIGH);

    if (user_input == '0')        {
      Stop();
    }
    else if (user_input == '1')    {
      go();   
    }
    else if (user_input == '2')    {
      back();  
    }
    else if (user_input == '3')    {
      left(); 
    }
    else if (user_input == '4')    {
      rigth(); 
    }

    
    else if (user_input == '5')    {
      l_go();
    }
    else if (user_input == '6')    {
      l_back();
    }
    else if (user_input == '7')    {
      r_go();
    }
    else if (user_input == '8')    {
      r_back();
    }

    else if (user_input == '9')    {
      Serial.println("TEST MAGA");
    }

   
    else
    {
      Serial.println("Invalid option entered.");
    }

  }
}
