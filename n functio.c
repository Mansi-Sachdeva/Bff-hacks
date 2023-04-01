void myfunction(int array[])
{

    int i;
    for(i=0;i<5;i++)
    {
        printf("%d\n", array[i]);
    }

}
main()
{
    int array[]= {10,20,30,40,50};
    myfunction(array);
}
