void bubbleSort(int* ms, int l) 
{
 int temp = 0; 
 bool exit = false; 
 
 while (!exit) 
 {
  exit = true;
  for (int i=0; i<(l-1); i++) 
																			 
    if (ms[i] > ms[i+1])													
    {
								
     temp = ms[i];
     ms[i] = ms[i+1];
     ms[i+1] = temp;
     exit = false;														
    }
 }
}
