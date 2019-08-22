/*
 * Project meshtest
 * Description:
 * Author:
 * Date:
 */

void setup() {
  Serial.begin(115200);
}

void loop() {
  int mesh_publish_result = (2 + 3); // Try changing the values within the parentheses to make it not equal to 4.
  Serial.print("mesh_publish_result is now: ");
  Serial.println(mesh_publish_result);

  // Now check mesh_public_result to see if it's what you want it to be.
  if(mesh_publish_result == 4)
  {
    Serial.println("Good. The result is 4.");
  }
  else if(mesh_publish_result != 4)
  {
    Serial.print("Sorry bruv. mesh_publish_result isn't 4. It's actually: ");
    Serial.println(mesh_publish_result);
  }
  delay(2000);
}

/*
Or similarly, you can assign the return of Mesh.Publish() to a variable and then work with it:
void loop() {
  int mesh_publish_result = Mesh.publish("motion-sensor", "living room");
  Serial.print("mesh_publish_result is now: ");
  Serial.println(mesh_publish_result);

  // Now check mesh_public_result to see if it's what you want it to be.
  if(mesh_publish_result == 0)
  {
    Serial.println("Good. The result is 0.");
  }
  else if(mesh_publish_result != 0)
  {
    Serial.print("Sorry bruv. mesh_publish_result isn't 0. It's actually: ");
    Serial.println(mesh_publish_result);
  }
  delay(2000);  
}
*/
