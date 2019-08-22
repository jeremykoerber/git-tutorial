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
  int mesh_publish_result = (3 + 4);
  Serial.print("mesh_publish_result is now: ");
  Serial.println(mesh_publish_result);
}
