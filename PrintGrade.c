#include <stdio.h>
void main()
{
<<<<<<< HEAD
  char Name[30][40] = {"Peter Matthews", "Mary McBeth", "Ying Phakpo","Cha Chanchai", "Yong Boonsith", "Kitti Karndee"}; 
=======
<<<<<<< HEAD
  char Name[30][40] = {"Peter Matthews", "Nicharee", "Phakpon","Chai Chanchai", "Yong Boonsith", "Kitti Karndee"}; 
=======
  char Name[30][40] = {"Peter Matthews", "Mary McBeth", "Ying Phakpon","Cha Chanchai", "Yong Boonsith", "Kitti Karndee"}; 
>>>>>>> bd165c7d34b8df1592709d06a90c011472940e44
>>>>>>> 0cea45d682d6aa61c023a687f456c029ffac877c
  int ID[30] = {5301, 5302, 5303, 5304, 5305, 5306}; 
  float GPA[30] = {2.73, 2.35, 3.65, 3.24, 2.32, 3.26}; 
  int N = 6, i;
  int SearchID, found_index; 
 
  printf("\nSTUDENT GPA LIST: \n"); 
  printf("ID----Name------------------------GPA\n"); 
  for (i=0;i<N; i++)
    printf("%5d %-25s %5.2f\n", ID[i], Name[i], GPA[i]); 
  printf("-------------------------------------\n");
  printf("Enter Student ID to Search (0 to End): "); 
  scanf("%d", &SearchID); 
  while (SearchID)
  {
      found_index = -1; 
      for (i = 0; i<N && found_index == -1; i++)

        if (SearchID == ID[i])

          found_index = i;

      if (found_index == -1)
        printf("Sorry, Student ID %5d not found.\n", SearchID);
      else 
        printf("ID: %5d. Name: %-25s. GPA: %5.2f.\n", 
           ID[found_index], Name[found_index],  GPA[found_index]);

      printf("Enter Student ID to Search (0 to End): ");

      scanf("%d", &SearchID);
  }
  printf("Bye Bye\n"); 
}
