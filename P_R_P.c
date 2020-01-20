#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
int MENU();
void REGION_I(); // Delaring global function prototype for regions
void REGION_II(); // Delaring global function prototype for regions
void REGION_III(); // Delaring global function prototype for regions
void REGION_IV(); // Delaring global function prototype for regions
void REGION_V(); // Delaring global function prototype for regions
void REGION_VI(); // Delaring global function prototype for regions
void REGION_VII(); // Delaring global function prototype for regions
void REGION_VIII(); // Delaring global function prototype for regions
void REGION_IX(); // Delaring global function prototype for regions
void REGION_XI(); // Delaring global function prototype for regions
void REGION_X(); // Delaring global function prototype for regions
void REGION_XI(); // Delaring global function prototype for regions
void REGION_XII(); // Delaring global function prototype for regions
void REGION_XIII(); // Delaring global function prototype for regions
void ARMM_REGION(); // Delaring global function prototype for regions
void CAR_REGION(); // Delaring global function prototype for regions
struct REGION1_PROVINCES { // Declaring global structures for region provinces
    int PROVINCE_ID;
    char PROVINCE_NAME[100];
};
struct REGION1_PROVINCES r1_p[100];
struct REGION1_PROVINCES swap;
int main() {
    int i,n;
    printf("PROGRAMMED BY: 'TORRES, KIM DAVE O.'");
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t        ENTERING SYSTEM PLEASE WAIT.");
    printf("\n\n\n\n\n\n\t\t\t\t\t    [");
    for(i = 0; i < 10; i++) {
        system("color F0"); //Creates Black Background with Light Red text
        printf(" | ");
        Sleep(100);
    }
    printf(" ]");
    system("cls"); // used to clear the previous screen
    system("color 0E"); //Creates Black Background with Light Green text
    printf("\n");
    printf("\t\t\t\t\t   \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
    printf("\t\t\t\t\t   \xb PHILIPPINE REGIONS AND PROVINCES \xb\n"); // List of regions menu
    printf("\t\t\t\t\t   \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
    printf("\t\t\t\t\t   \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
    printf("\t\t\t\t\t   \xb [1]Region-(I)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [2]Region-(II)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [3]Region-(III)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [4]Region-(IV)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [5]Region-(V)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [6]Region-(VI)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [7]Region-(VII)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [8]Region-(VIII)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [9]Region-(IX)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [10]Region-(X)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [11]Region-(XI)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [12]Region-(XII)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [13]Region-(X111)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [14]ARMM Region.\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [15]CAR Region.\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb");
    printf("\n");
    printf("\t\t\t\t\t   CHOOSE [n] REGION: "); // Choosing regions menu
    scanf("%d",&n);
    printf("\n");
    switch(n) {
    case 1:
        system("cls"); // used to clear the previous screen
        REGION_I(); // Function called here
       break;
    case 2:
        system("cls"); // used to clear the previous screen
        REGION_II();
       break;
    case 3:
        system("cls"); // used to clear the previous screen
        REGION_III(); // Function called here
       break;
    case 4:
        system("cls"); // used to clear the previous screen
        REGION_IV(); // Function called here
       break;
    case 5:
        system("cls"); // used to clear the previous screen
        REGION_V();
       break;
    case 6:
        system("cls"); // used to clear the previous screen
        REGION_VI();
       break;
    case 7:
        system("cls"); // used to clear the previous screen
        REGION_VII();
       break;
    case 8:
        system("cls"); // used to clear the previous screen
        REGION_VIII();
       break;
    case 9:
        system("cls"); // used to clear the previous screen
        REGION_IX();
       break;
    case 10:
        system("cls"); // used to clear the previous screen
        REGION_X();
       break;
    case 11:
        system("cls"); // used to clear the previous screen
        REGION_XI();
       break;
    case 12:
        system("cls"); // used to clear the previous screen
        REGION_XII();
       break;
    case 13:
        system("cls"); // used to clear the previous screen
        REGION_XIII();
       break;
    case 14:
        system("cls"); // used to clear the previous screen
        ARMM_REGION();
       break;
    case 15:
        system("cls"); // used to clear the previous screen
        CAR_REGION();
       break;
    default:
        system("cls"); // used to clear the previous screen
        system("color 0C");
        printf("\n\n\n\n\n\n\n\n\t\t\tNOTE[!]: You input an invalid menu please choose correctly to avoid error.");
        getch();
        system("cls"); // used to clear the previous screen
        MENU();
        break;
    }
}
int MENU() {
    int i;
    system("cls"); // used to clear the previous screen
    system("color 0E"); //Creates Black Background with Light Green text
    printf("PROGRAMMED BY: 'KIM DAVE TORRES'");
    printf("\n");
    printf("\t\t\t\t\t   \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
    printf("\t\t\t\t\t   \xb PHILIPPINE REGIONS AND PROVINCES \xb\n"); // List of regions menu
    printf("\t\t\t\t\t   \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
    printf("\t\t\t\t\t   \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
    printf("\t\t\t\t\t   \xb [1]Region-(I)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [2]Region-(II)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [3]Region-(III)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [4]Region-(IV)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [5]Region-(V)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [6]Region-(VI)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [7]Region-(VII)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [8]Region-(VIII)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [9]Region-(IX)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [10]Region-(X)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [11]Region-(XI)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [12]Region-(XII)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [13]Region-(X111)\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [14]ARMM Region.\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb [15]CAR Region.\t\t      \xb\n");
    printf("\t\t\t\t\t   \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb");
    printf("\n");
    printf("\t\t\t\t\t   CHOOSE [n] REGION: "); // Choosing regions menu
    scanf("%d",&i);
    printf("\n");
    switch(i) {
    case 1:
        system("cls"); // used to clear the previous screen
        REGION_I(); // Function called here
       break;
    case 2:
        system("cls"); // used to clear the previous screen
        REGION_II();
       break;
    case 3:
        system("cls"); // used to clear the previous screen
        REGION_III(); // Function called here
       break;
    case 4:
        system("cls"); // used to clear the previous screen
        REGION_IV(); // Function called here
       break;
    case 5:
        system("cls"); // used to clear the previous screen
        REGION_V();
       break;
    case 6:
        system("cls"); // used to clear the previous screen
        REGION_VI();
       break;
    case 7:
        system("cls"); // used to clear the previous screen
        REGION_VII();
       break;
    case 8:
        system("cls"); // used to clear the previous screen
        REGION_VIII();
       break;
    case 9:
        system("cls"); // used to clear the previous screen
        REGION_IX();
       break;
    case 10:
        system("cls"); // used to clear the previous screen
        REGION_X();
       break;
    case 11:
        system("cls"); // used to clear the previous screen
        REGION_XI();
       break;
    case 12:
        system("cls"); // used to clear the previous screen
        REGION_XII();
       break;
    case 13:
        system("cls"); // used to clear the previous screen
        REGION_XIII();
       break;
    case 14:
        system("cls"); // used to clear the previous screen
        ARMM_REGION();
       break;
    case 15:
        system("cls"); // used to clear the previous screen
        CAR_REGION();
       break;
    default:
        system("cls"); // used to clear the previous screen
        system("color 0C");
        printf("\n\n\n\n\n\n\n\n\t\t\tNOTE[!]: You input an invalid menu please choose correctly to avoid error.");
        getch();
        system("cls"); // used to clear the previous screen
        MENU();
        break;
    }
}
void REGION_I() {
    system("color 0A");
    char ch1,ch2,ch3,ch4,ch5,province_name[100];
    int i = 0, c, j, d = 0, e = 0, f = 0, province_num, n, foundID = 0;
    FILE *fp_ADD; // declaring a file pointer
    FILE *fp_DELETE; // declaring a file pointer
    FILE *fp_TEMP; // declaring a file pointer
    FILE *fp_RECOVER; // declaring a file pointer
    FILE *fp_EDIT; // declaring a file pointer
    FILE *fp_LIST_AVAILABLE;
    FILE *fp_READ1, *fp_READ2, *fp_READ3, *fp_READ4, *fp_TRANSFER; // declaring a file pointer
    fp_READ1 = fopen("REGION1_PROVINCES.txt","r"); // opening a file for reading
    if(fp_READ1 == NULL) { // checking if the file is in the location
        printf("The file REGION1_PROVINCES.txt was not found!\n");
        exit(1);
    }else {
       printf("\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       printf("\t\t\t\t\t  \xb        REGION-(I) PROVINCES         \xb\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       while(fscanf(fp_READ1,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // reading a file until the end of file
            i++;
       }
        for(c = 0; c < i; c++) {
            for(j = c + 1; j < i; j++) {
                if(r1_p[c].PROVINCE_ID > r1_p[j].PROVINCE_ID) {
                    swap = r1_p[c];
                    r1_p[c] = r1_p[j];
                    r1_p[j] = swap;
                }
            }
        }
        fp_TRANSFER = fopen("REGION1_PROVINCES.txt","w");
        for(c = 0; c < i; c++) {
            fprintf(fp_TRANSFER,"%d %s\n",r1_p[c].PROVINCE_ID,r1_p[c].PROVINCE_NAME);
        }
        fclose(fp_TRANSFER);
        fclose(fp_READ1);
        fp_READ2 = fopen("REGION1_PROVINCES.txt","r");
           while(fscanf(fp_READ2,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                printf("\n\t\t\t\t\t  [%d]     %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                d++;
           }
        fclose(fp_READ2);
        printf("\n\n");
        printf("\t\t\t\t\t  ---------------------------------------\n");
        fflush(stdin); // avoid jumping to another input
        printf("\t\t\t\t\t  Continue to ADD, DELETE, EDIT?[Y/N]: ");
        scanf("%c",&ch1);
       if(ch1 == 'Y' || ch1 == 'y') {
            system("cls"); // used to clear the previous screen
            printf("\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [1]ADD           \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [2]DELETE        \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [3]EDIT          \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\n");
            printf("\t\t\t\t\t      Choose [n] to operate: ");
            scanf("%d",&i);
            switch(i) { // switch cases for choosing a menu
            case 1: // CASE FOR ADD PROVINCE
                    fp_ADD = fopen("REGION1_PROVINCES.txt","a"); // opening a file for append
                    if(fp_ADD == NULL) { // checking if the file is in the location
                        printf("The file was not found!\n");
                        exit(1);
                    }else {
                        system("cls"); // used to clear the previous screen
                        printf("\n\t\tUsed underscore '_' or any character when you add a province name with a spaces to avoid (error)!");
                        printf("\n\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb              [1]ADD               \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    Enter province unique number to add: ");
                        scanf("%d",&province_num); // enter province id
                        fp_READ3 = fopen("REGION1_PROVINCES.txt","r"); // opening file for reading
                        while(fscanf(fp_READ3,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) { // scanning to the file
                            e++;
                        }
                        for(j = 0; j < e; j++) {
                            if(province_num == r1_p[j].PROVINCE_ID) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province ID you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_I(); // call the function
                                break;
                            }
                        }
                        fclose(fp_READ3); // closing the file
                        printf("\n");
                        fflush(stdin); // avoid  jumping to another
                        printf("\t\t\t\t\t    Enter province name to add: ");
                        scanf("%s",&province_name); // enter province name
                        fp_READ4 = fopen("REGION1_PROVINCES.txt","r"); // opening file
                        while(fscanf(fp_READ4,"%d %s", &r1_p[i].PROVINCE_ID, &r1_p[i].PROVINCE_NAME) != EOF) { // scanning to the file
                            i++;
                        }
                        for(j = 0; j < i; j++) {
                            if(strcmp(province_name,r1_p[j].PROVINCE_NAME) == 0) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province NAME you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_I(); // call the function
                                break;
                            }
                        }
                        fprintf(fp_ADD,"%d %s\n",province_num,province_name); // printing to the file
                        fclose(fp_ADD); // closing file
                        fclose(fp_READ4); // closing file fo adding provinces
                        printf("\n");
                        fflush(stdin); // avoid input jumping in to another
                        printf("\t\t\t\t\t    Add another province? or Back?[Y/N/B]: ");
                        scanf("%c",&ch1);
                        if(ch1 == 'Y' || ch1 == 'y') {
                            system("cls"); // used to clear the previous screen
                            REGION_I(); // call again the function if condition is true
                        }else if(ch1 == 'B' || ch1 == 'b') {
                            system("cls"); // used to clear the previous screen
                            REGION_I(); // call again the function if condition is true
                        }else {
                            system("cls"); // used to clear the previous screen
                            MENU(); // call main function if condition is false
                        }
                    }
                break;
            case 2: // CASE FOR DELETE PROVINCE
                    fp_LIST_AVAILABLE = fopen("REGION1_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE  == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]DELETE PROVINCE        \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to delete[!]::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // list of all province that available to delete
                             printf("\t\t\t\t\t    [%d] %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      -----------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to delete: ");
                        scanf("%d",&n);
                        fp_DELETE = fopen("REGION1_PROVINCES.txt","r");
                        printf("\n");
                        while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                            if(n == r1_p[d].PROVINCE_ID) {
                               foundID = 1;
                            }
                            d++;
                        }
                        fclose(fp_DELETE);
                        if(foundID == 1) {
                            fp_DELETE = fopen("REGION1_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION1_TEMP.txt","w");
                            foundID = 0;
                           while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[d].PROVINCE_ID) == 0 ) {
                                   fprintf(fp_TEMP,"%d %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                                }
                                d++;
                            }
                            fclose(fp_DELETE);
                            fclose(fp_TEMP);
                            remove("REGION1_PROVINCES.txt");
                            rename("REGION1_TEMP.txt","REGION1_PROVINCES.txt");
                            printf("\n");
                            system("cls");
                            system("color 0C");
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Deleting please wait");
                            for(c = 0; c < 3; c++) {
                                printf(".");
                                Sleep(600);
                            }
                            system("cls");
                        }else {
                            fflush(stdin);
                            printf("\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_I();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t    Delete another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_I();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_I();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            case 3: // CASE FOR EDIT
                    fp_LIST_AVAILABLE = fopen("REGION1_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]EDIT PROVINCE          \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to edit::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) {
                            printf("\t\t\t\t\t    [%d]   %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      ---------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to edit: ");
                        scanf("%d",&n);
                        fp_EDIT = fopen("REGION1_PROVINCES.txt","r");
                        while(fscanf(fp_EDIT,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if(n == r1_p[d].PROVINCE_ID) {
                                   foundID = 1;
                                }
                            d++;
                        }
                        fclose(fp_EDIT);
                        if(foundID == 1) {
                            fp_EDIT = fopen("REGION1_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION1_TEMP.txt","w");
                            foundID = 0;
                            while(fscanf(fp_EDIT,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[e].PROVINCE_ID) == 1 ) {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       You choose [%s] to edit.\n\n",r1_p[e].PROVINCE_NAME);
                                    printf("\t\t\t\t\t       Edit province your selected: ");
                                    scanf("%s",&r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Editing please wait");
                                    for(j = 0; j < 3; j++) {
                                        printf(".");
                                        Sleep(600);
                                    }
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                }else {
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                }
                                e++;
                            }
                            fclose(fp_EDIT);
                            fclose(fp_TEMP);
                            remove("REGION1_PROVINCES.txt");
                            rename("REGION1_TEMP.txt","REGION1_PROVINCES.txt");
                        }else {
                            fflush(stdin);
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_I();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        system("cls");
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       Edit another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_I();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_I();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            default:
                system("cls"); // used to clear the previous screen
                system("color 0C");
                printf("\n\n\n\n\n\n\n\n\t\t\t   NOTE[!]: You input an invalid menu please choose correctly to avoid error.");
                getch();
                system("cls"); // used to clear the previous screen
                REGION_I(); // call function for validation
                break;
            } // closing brackets for switch(i)
       }else {
            system("cls"); // used to clear the previous screen
            MENU(); // call main function if condition is false
       } // closing bracket for if(ch1 == 'Y' || ch1 == 'y')
    } // fp_READ else closing bracket
} // closing bracket for REFION function
void REGION_II() {
     system("color 0A");
    char ch1,ch2,ch3,ch4,ch5,province_name[100];
    int i = 0, c, j, d = 0, e = 0, f = 0, province_num, n, foundID = 0;
    FILE *fp_ADD; // declaring a file pointer
    FILE *fp_DELETE; // declaring a file pointer
    FILE *fp_TEMP; // declaring a file pointer
    FILE *fp_RECOVER; // declaring a file pointer
    FILE *fp_EDIT; // declaring a file pointer
    FILE *fp_LIST_AVAILABLE;
    FILE *fp_READ1, *fp_READ2, *fp_READ3, *fp_READ4, *fp_TRANSFER; // declaring a file pointer
    fp_READ1 = fopen("REGION2_PROVINCES.txt","r"); // opening a file for reading
    if(fp_READ1 == NULL) { // checking if the file is in the location
        printf("The file REGION2_PROVINCES.txt was not found!\n");
        exit(1);
    }else {
       printf("\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       printf("\t\t\t\t\t  \xb        REGION-(II) PROVINCES        \xb\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       while(fscanf(fp_READ1,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // reading a file until the end of file
            i++;
       }
        for(c = 0; c < i; c++) {
            for(j = c + 1; j < i; j++) {
                if(r1_p[c].PROVINCE_ID > r1_p[j].PROVINCE_ID) {
                    swap = r1_p[c];
                    r1_p[c] = r1_p[j];
                    r1_p[j] = swap;
                }
            }
        }
        fp_TRANSFER = fopen("REGION2_PROVINCES.txt","w");
        for(c = 0; c < i; c++) {
            fprintf(fp_TRANSFER,"%d %s\n",r1_p[c].PROVINCE_ID,r1_p[c].PROVINCE_NAME);
        }
        fclose(fp_TRANSFER);
        fclose(fp_READ1);
        fp_READ2 = fopen("REGION2_PROVINCES.txt","r");
           while(fscanf(fp_READ2,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                printf("\n\t\t\t\t\t  [%d]     %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                d++;
           }
        fclose(fp_READ2);
        printf("\n\n");
        printf("\t\t\t\t\t  ---------------------------------------\n");
        fflush(stdin); // avoid jumping to another input
        printf("\t\t\t\t\t  Continue to ADD, DELETE, EDIT?[Y/N]: ");
        scanf("%c",&ch1);
       if(ch1 == 'Y' || ch1 == 'y') {
            system("cls"); // used to clear the previous screen
            printf("\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [1]ADD           \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [2]DELETE        \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [3]EDIT          \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\n");
            printf("\t\t\t\t\t      Choose [n] to operate: ");
            scanf("%d",&i);
            switch(i) { // switch cases for choosing a menu
            case 1: // CASE FOR ADD PROVINCE
                    fp_ADD = fopen("REGION2_PROVINCES.txt","a"); // opening a file for append
                    if(fp_ADD == NULL) { // checking if the file is in the location
                        printf("The file was not found!\n");
                        exit(1);
                    }else {
                        system("cls"); // used to clear the previous screen
                        printf("\n\t\tUsed underscore '_' or any character when you add a province name with a spaces to avoid (error)!");
                        printf("\n\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb              [1]ADD               \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    Enter province unique number to add: ");
                        scanf("%d",&province_num); // enter province id
                        fp_READ3 = fopen("REGION2_PROVINCES.txt","r"); // opening file for reading
                        while(fscanf(fp_READ3,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) { // scanning to the file
                            e++;
                        }
                        for(j = 0; j < e; j++) {
                            if(province_num == r1_p[j].PROVINCE_ID) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province ID you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_II(); // call the function
                                break;
                            }
                        }
                        fclose(fp_READ3); // closing the file
                        printf("\n");
                        fflush(stdin); // avoid  jumping to another
                        printf("\t\t\t\t\t    Enter province name to add: ");
                        scanf("%s",&province_name); // enter province name
                        fp_READ4 = fopen("REGION2_PROVINCES.txt","r"); // opening file
                        while(fscanf(fp_READ4,"%d %s", &r1_p[i].PROVINCE_ID, &r1_p[i].PROVINCE_NAME) != EOF) { // scanning to the file
                            i++;
                        }
                        for(j = 0; j < i; j++) {
                            if(strcmp(province_name,r1_p[j].PROVINCE_NAME) == 0) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province NAME you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_II(); // call the function
                                break;
                            }
                        }
                        fprintf(fp_ADD,"%d %s\n",province_num,province_name); // printing to the file
                        fclose(fp_ADD); // closing file
                        fclose(fp_READ4); // closing file fo adding provinces
                        printf("\n");
                        fflush(stdin); // avoid input jumping in to another
                        printf("\t\t\t\t\t    Add another province? or Back?[Y/N/B]: ");
                        scanf("%c",&ch1);
                        if(ch1 == 'Y' || ch1 == 'y') {
                            system("cls"); // used to clear the previous screen
                            REGION_II(); // call again the function if condition is true
                        }else if(ch1 == 'B' || ch1 == 'b') {
                            system("cls"); // used to clear the previous screen
                            REGION_II(); // call again the function if condition is true
                        }else {
                            system("cls"); // used to clear the previous screen
                            MENU(); // call main function if condition is false
                        }
                    }
                break;
            case 2: // CASE FOR DELETE PROVINCE
                    fp_LIST_AVAILABLE = fopen("REGION2_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE  == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]DELETE PROVINCE        \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to delete[!]::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // list of all province that available to delete
                             printf("\t\t\t\t\t    [%d] %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      -----------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to delete: ");
                        scanf("%d",&n);
                        fp_DELETE = fopen("E:/PROJECT_summer/REGION2_PROVINCES.txt","r");
                        printf("\n");
                        while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                            if(n == r1_p[d].PROVINCE_ID) {
                               foundID = 1;
                            }
                            d++;
                        }
                        fclose(fp_DELETE);
                        if(foundID == 1) {
                            fp_DELETE = fopen("REGION2_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION2_TEMP.txt","w");
                            foundID = 0;
                           while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[d].PROVINCE_ID) == 0 ) {
                                   fprintf(fp_TEMP,"%d %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                                }
                                d++;
                            }
                            fclose(fp_DELETE);
                            fclose(fp_TEMP);
                            remove("REGION2_PROVINCES.txt");
                            rename("REGION2_TEMP.txt","REGION2_PROVINCES.txt");
                            printf("\n");
                            system("cls");
                            system("color 0C");
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Deleting please wait");
                            for(c = 0; c < 3; c++) {
                                printf(".");
                                Sleep(600);
                            }
                            system("cls");
                        }else {
                            fflush(stdin);
                            printf("\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_II();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t    Delete another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_II();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_II();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            case 3: // CASE FOR EDIT
                    fp_LIST_AVAILABLE = fopen("REGION2_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]EDIT PROVINCE          \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to edit::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) {
                            printf("\t\t\t\t\t    [%d]   %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      ---------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to edit: ");
                        scanf("%d",&n);
                        fp_EDIT = fopen("REGION2_PROVINCES.txt","r");
                        while(fscanf(fp_EDIT,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if(n == r1_p[d].PROVINCE_ID) {
                                   foundID = 1;
                                }
                            d++;
                        }
                        fclose(fp_EDIT);
                        if(foundID == 1) {
                            fp_EDIT = fopen("REGION2_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION2_TEMP.txt","w");
                            foundID = 0;
                            while(fscanf(fp_EDIT,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[e].PROVINCE_ID) == 1 ) {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       You choose [%s] to edit.\n\n",r1_p[e].PROVINCE_NAME);
                                    printf("\t\t\t\t\t       Edit province your selected: ");
                                    scanf("%s",&r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Editing please wait");
                                    for(j = 0; j < 3; j++) {
                                        printf(".");
                                        Sleep(600);
                                    }
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                }else {
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                }
                                e++;
                            }
                            fclose(fp_EDIT);
                            fclose(fp_TEMP);
                            remove("REGION2_PROVINCES.txt");
                            rename("REGION2_TEMP.txt","REGION2_PROVINCES.txt");
                        }else {
                            fflush(stdin);
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_II();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        system("cls");
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       Edit another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_II();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_II();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            default:
                system("cls"); // used to clear the previous screen
                system("color 0C");
                printf("\n\n\n\n\n\n\n\n\t\t\t   NOTE[!]: You input an invalid menu please choose correctly to avoid error.");
                getch();
                system("cls"); // used to clear the previous screen
                REGION_II(); // call function for validation
                break;
            } // closing brackets for switch(i)
       }else {
            system("cls"); // used to clear the previous screen
            MENU(); // call main function if condition is false
       } // closing bracket for if(ch1 == 'Y' || ch1 == 'y')
    } // fp_READ else closing bracket
}
void REGION_III() {
    system("color 0A");
    char ch1,ch2,ch3,ch4,ch5,province_name[100];
    int i = 0, c, j, d = 0, e = 0, f = 0, province_num, n, foundID = 0;
    FILE *fp_ADD; // declaring a file pointer
    FILE *fp_DELETE; // declaring a file pointer
    FILE *fp_TEMP; // declaring a file pointer
    FILE *fp_RECOVER; // declaring a file pointer
    FILE *fp_EDIT; // declaring a file pointer
    FILE *fp_LIST_AVAILABLE;
    FILE *fp_READ1, *fp_READ2, *fp_READ3, *fp_READ4, *fp_TRANSFER; // declaring a file pointer
    fp_READ1 = fopen("REGION3_PROVINCES.txt","r"); // opening a file for reading
    if(fp_READ1 == NULL) { // checking if the file is in the location
        printf("The file REGION3_PROVINCES.txt was not found!\n");
        exit(1);
    }else {
        system("cls");
       printf("\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       printf("\t\t\t\t\t  \xb        REGION-(III) PROVINCES       \xb\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       while(fscanf(fp_READ1,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // reading a file until the end of file
            i++;
       }
        for(c = 0; c < i; c++) {
            for(j = c + 1; j < i; j++) {
                if(r1_p[c].PROVINCE_ID > r1_p[j].PROVINCE_ID) {
                    swap = r1_p[c];
                    r1_p[c] = r1_p[j];
                    r1_p[j] = swap;
                }
            }
        }
        fp_TRANSFER = fopen("REGION3_PROVINCES.txt","w");
        for(c = 0; c < i; c++) {
            fprintf(fp_TRANSFER,"%d %s\n",r1_p[c].PROVINCE_ID,r1_p[c].PROVINCE_NAME);
        }
        fclose(fp_TRANSFER);
        fclose(fp_READ1);
        fp_READ2 = fopen("REGION3_PROVINCES.txt","r");
           while(fscanf(fp_READ2,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                printf("\n\t\t\t\t\t  [%d]     %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                d++;
           }
        fclose(fp_READ2);
        printf("\n\n");
        printf("\t\t\t\t\t  ---------------------------------------\n");
        fflush(stdin); // avoid jumping to another input
        printf("\t\t\t\t\t  Continue to ADD, DELETE, EDIT?[Y/N]: ");
        scanf("%c",&ch1);
       if(ch1 == 'Y' || ch1 == 'y') {
            system("cls"); // used to clear the previous screen
            printf("\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [1]ADD           \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [2]DELETE        \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [3]EDIT          \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\n");
            printf("\t\t\t\t\t      Choose [n] to operate: ");
            scanf("%d",&i);
            switch(i) { // switch cases for choosing a menu
            case 1: // CASE FOR ADD PROVINCE
                    fp_ADD = fopen("REGION3_PROVINCES.txt","a"); // opening a file for append
                    if(fp_ADD == NULL) { // checking if the file is in the location
                        printf("The file was not found!\n");
                        exit(1);
                    }else {
                        system("cls"); // used to clear the previous screen
                        printf("\n\t\tUsed underscore '_' or any character when you add a province name with a spaces to avoid (error)!");
                        printf("\n\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb              [1]ADD               \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    Enter province unique number to add: ");
                        scanf("%d",&province_num); // enter province id
                        fp_READ3 = fopen("REGION3_PROVINCES.txt","r"); // opening file for reading
                        while(fscanf(fp_READ3,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) { // scanning to the file
                            e++;
                        }
                        for(j = 0; j < e; j++) {
                            if(province_num == r1_p[j].PROVINCE_ID) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province ID you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_III(); // call the function
                                break;
                            }
                        }
                        fclose(fp_READ3); // closing the file
                        printf("\n");
                        fflush(stdin); // avoid  jumping to another
                        printf("\t\t\t\t\t    Enter province name to add: ");
                        scanf("%s",&province_name); // enter province name
                        fp_READ4 = fopen("REGION3_PROVINCES.txt","r"); // opening file
                        while(fscanf(fp_READ4,"%d %s", &r1_p[i].PROVINCE_ID, &r1_p[i].PROVINCE_NAME) != EOF) { // scanning to the file
                            i++;
                        }
                        for(j = 0; j < i; j++) {
                            if(strcmp(province_name,r1_p[j].PROVINCE_NAME) == 0) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province NAME you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_III(); // call the function
                                break;
                            }
                        }
                        fprintf(fp_ADD,"%d %s\n",province_num,province_name); // printing to the file
                        fclose(fp_ADD); // closing file
                        fclose(fp_READ4); // closing file fo adding provinces
                        printf("\n");
                        fflush(stdin); // avoid input jumping in to another
                        printf("\t\t\t\t\t    Add another province? or Back?[Y/N/B]: ");
                        scanf("%c",&ch1);
                        if(ch1 == 'Y' || ch1 == 'y') {
                            system("cls"); // used to clear the previous screen
                            REGION_III(); // call again the function if condition is true
                        }else if(ch1 == 'B' || ch1 == 'b') {
                            system("cls"); // used to clear the previous screen
                            REGION_III(); // call again the function if condition is true
                        }else {
                            system("cls"); // used to clear the previous screen
                            MENU(); // call main function if condition is false
                        }
                    }
                break;
            case 2: // CASE FOR DELETE PROVINCE
                    fp_LIST_AVAILABLE = fopen("REGION3_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE  == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]DELETE PROVINCE        \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to delete[!]::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // list of all province that available to delete
                             printf("\t\t\t\t\t    [%d] %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      -----------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to delete: ");
                        scanf("%d",&n);
                        fp_DELETE = fopen("REGION3_PROVINCES.txt","r");
                        printf("\n");
                        while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                            if(n == r1_p[d].PROVINCE_ID) {
                               foundID = 1;
                            }
                            d++;
                        }
                        fclose(fp_DELETE);
                        if(foundID == 1) {
                            fp_DELETE = fopen("REGION3_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION3_TEMP.txt","w");
                            foundID = 0;
                           while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[d].PROVINCE_ID) == 0 ) {
                                   fprintf(fp_TEMP,"%d %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                                }
                                d++;
                            }
                            fclose(fp_DELETE);
                            fclose(fp_TEMP);
                            remove("REGION3_PROVINCES.txt");
                            rename("REGION3_TEMP.txt","REGION3_PROVINCES.txt");
                            printf("\n");
                            system("cls");
                            system("color 0C");
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Deleting please wait");
                            for(c = 0; c < 3; c++) {
                                printf(".");
                                Sleep(600);
                            }
                            system("cls");
                        }else {
                            fflush(stdin);
                            printf("\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_III();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t    Delete another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_III();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_III();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            case 3: // CASE FOR EDIT
                    fp_LIST_AVAILABLE = fopen("REGION3_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]EDIT PROVINCE          \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to edit::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) {
                            printf("\t\t\t\t\t    [%d]   %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      ---------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to edit: ");
                        scanf("%d",&n);
                        fp_EDIT = fopen("REGION3_PROVINCES.txt","r");
                        while(fscanf(fp_EDIT,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if(n == r1_p[d].PROVINCE_ID) {
                                   foundID = 1;
                                }
                            d++;
                        }
                        fclose(fp_EDIT);
                        if(foundID == 1) {
                            fp_EDIT = fopen("REGION3_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION3_TEMP.txt","w");
                            foundID = 0;
                            while(fscanf(fp_EDIT,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[e].PROVINCE_ID) == 1 ) {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       You choose [%s] to edit.\n\n",r1_p[e].PROVINCE_NAME);
                                    printf("\t\t\t\t\t       Edit province your selected: ");
                                    scanf("%s",&r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Editing please wait");
                                    for(j = 0; j < 3; j++) {
                                        printf(".");
                                        Sleep(600);
                                    }
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                }else {
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                }
                                e++;
                            }
                            fclose(fp_EDIT);
                            fclose(fp_TEMP);
                            remove("REGION3_PROVINCES.txt");
                            rename("REGION3_TEMP.txt","REGION3_PROVINCES.txt");
                        }else {
                            fflush(stdin);
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_III();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        system("cls");
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       Edit another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_III();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_III();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            default:
                system("cls"); // used to clear the previous screen
                system("color 0C");
                printf("\n\n\n\n\n\n\n\n\t\t\t   NOTE[!]: You input an invalid menu please choose correctly to avoid error.");
                getch();
                system("cls"); // used to clear the previous screen
                REGION_III(); // call function for validation
                break;
            } // closing brackets for switch(i)
       }else {
            system("cls"); // used to clear the previous screen
            MENU(); // call main function if condition is false
       } // closing bracket for if(ch1 == 'Y' || ch1 == 'y')
    } // fp_READ else closing bracket
}
void REGION_IV() {
    system("color 0A");
    char ch1,ch2,ch3,ch4,ch5,province_name[100];
    int i = 0, c, j, d = 0, e = 0, f = 0, province_num, n, foundID = 0,num;
    FILE *fp_ADD; // declaring a file pointer
    FILE *fp_DELETE; // declaring a file pointer
    FILE *fp_TEMP; // declaring a file pointer
    FILE *fp_RECOVER; // declaring a file pointer
    FILE *fp_EDIT; // declaring a file pointer
    FILE *fp_LIST_AVAILABLE;
    FILE *fp_READ1, *fp_READ2, *fp_READ3, *fp_READ4, *fp_TRANSFER; // declaring a file pointer
    printf("\n");
    printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
    printf("\t\t\t\t\t      \xb     [1]REGION (IV-A)    \xb\n");
    printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
    printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
    printf("\t\t\t\t\t      \xb     [2]REGION (IV-B)    \xb\n");
    printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
    printf("\t\t\t\t\t      CHOOSE [n] REGION: "); // Choosing regions menu
    scanf("%d",&num);
    if(num == 1) { //  >>>>[1]REGION (IV-A) ---------------
    fp_READ1 = fopen("REGION4_A_PROVINCES.txt","r"); // opening a file for append
    if(fp_READ1 == NULL) { // checking if the file is in the location
        printf("The file REGION4_A_PROVINCES.txt was not found!\n");
        exit(1);
    }else {
       system("cls"); // used to clear the previous screen
       printf("\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       printf("\t\t\t\t\t  \xb       REGION (IV-A) PROVINCES       \xb\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       while(fscanf(fp_READ1,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // reading a file until the end of file
            i++;
       }
        for(c = 0; c < i; c++) {
            for(j = c + 1; j < i; j++) {
                if(r1_p[c].PROVINCE_ID > r1_p[j].PROVINCE_ID) {
                    swap = r1_p[c];
                    r1_p[c] = r1_p[j];
                    r1_p[j] = swap;
                }
            }
        }
        fp_TRANSFER = fopen("REGION4_A_PROVINCES.txt","w");
        for(c = 0; c < i; c++) {
            fprintf(fp_TRANSFER,"%d %s\n",r1_p[c].PROVINCE_ID,r1_p[c].PROVINCE_NAME);
        }
        fclose(fp_TRANSFER);
        fclose(fp_READ1);
        fp_READ2 = fopen("REGION4_A_PROVINCES.txt","r");
           while(fscanf(fp_READ2,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                printf("\n\t\t\t\t\t  [%d]     %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                d++;
           }
        fclose(fp_READ2);
       fclose(fp_READ1); // closing the file fp_READ
       printf("\n");
       fflush(stdin); // avoid input jumping in to another
       printf("\n");
       printf("\t\t\t\t\t  ---------------------------------------\n");
       printf("\t\t\t\t\t  Continue to ADD, DELETE, EDIT?[Y/N/B]: ");
       scanf("%c",&ch1);
       if(ch1 == 'Y' || ch1 == 'y') {
            system("cls"); // used to clear the previous screen
            printf("\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [1]ADD           \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [2]DELETE        \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [3]EDIT          \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\n");
            printf("\t\t\t\t\t      Choose [n] to operate: ");
            scanf("%d",&i);
             switch(i) { // switch cases for choosing a menu
            case 1: // CASE FOR ADD PROVINCE
                    fp_ADD = fopen("REGION4_A_PROVINCES.txt","a"); // opening a file for append
                    if(fp_ADD == NULL) { // checking if the file is in the location
                        printf("The file was not found!\n");
                        exit(1);
                    }else {
                        system("cls"); // used to clear the previous screen
                        printf("\n\t\tUsed underscore '_' or any character when you add a province name with a spaces to avoid (error)!");
                        printf("\n\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb              [1]ADD               \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        fflush(stdin);
                        printf("\t\t\t\t\t    Enter province unique number to add: ");
                        scanf("%d",&province_num); // enter province id
                        fp_READ3 = fopen("REGION4_A_PROVINCES.txt","r"); // opening file for reading
                        while(fscanf(fp_READ3,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) { // scanning to the file
                            e++;
                        }
                        for(j = 0; j < e; j++) {
                            if(province_num == r1_p[j].PROVINCE_ID) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province ID you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_IV(); // call the function
                                break;
                            }
                        }
                        fclose(fp_READ3); // closing the file
                        printf("\n");
                        fflush(stdin); // avoid  jumping to another
                        printf("\t\t\t\t\t    Enter province name to add: ");
                        scanf("%s",&province_name); // enter province name
                        fp_READ4 = fopen("REGION4_A_PROVINCES.txt","r"); // opening file
                        while(fscanf(fp_READ4,"%d %s", &r1_p[i].PROVINCE_ID, &r1_p[i].PROVINCE_NAME) != EOF) { // scanning to the file
                            i++;
                        }
                        for(j = 0; j < i; j++) {
                            if(strcmp(province_name,r1_p[j].PROVINCE_NAME) == 0) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province NAME you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_IV(); // call the function
                                break;
                            }
                        }
                        fprintf(fp_ADD,"%d %s\n",province_num,province_name); // printing to the file
                        fclose(fp_ADD); // closing file
                        fclose(fp_READ4); // closing file fo adding provinces
                        printf("\n");
                        fflush(stdin); // avoid input jumping in to another
                        printf("\t\t\t\t\t    Add another province? or Back?[Y/N/B]: ");
                        scanf("%c",&ch1);
                        if(ch1 == 'Y' || ch1 == 'y') {
                            system("cls"); // used to clear the previous screen
                            REGION_IV(); // call again the function if condition is true
                        }else if(ch1 == 'B' || ch1 == 'b') {
                            system("cls"); // used to clear the previous screen
                            REGION_IV(); // call again the function if condition is true
                        }else {
                            system("cls"); // used to clear the previous screen
                            MENU(); // call main function if condition is false
                        }
                    }
                break;
            case 2: // CASE FOR DELETE PROVINCE
                    fp_LIST_AVAILABLE = fopen("REGION4_A_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE  == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]DELETE PROVINCE        \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to delete[!]::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // list of all province that available to delete
                             printf("\t\t\t\t\t    [%d] %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      -----------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to delete: ");
                        scanf("%d",&n);
                        fp_DELETE = fopen("REGION4_A_PROVINCES.txt","r");
                        printf("\n");
                        while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                            if(n == r1_p[d].PROVINCE_ID) {
                               foundID = 1;
                            }
                            d++;
                        }
                        fclose(fp_DELETE);
                        if(foundID == 1) {
                            fp_DELETE = fopen("REGION4_A_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION4_A_TEMP.txt","w");
                            foundID = 0;
                           while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[d].PROVINCE_ID) == 0 ) {
                                   fprintf(fp_TEMP,"%d %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                                }
                                d++;
                            }
                            fclose(fp_DELETE);
                            fclose(fp_TEMP);
                            remove("REGION4_A_PROVINCES.txt");
                            rename("REGION4_A_TEMP.txt","REGION4_A_PROVINCES.txt");
                            printf("\n");
                            system("cls");
                            system("color 0C");
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Deleting please wait");
                            for(c = 0; c < 3; c++) {
                                printf(".");
                                Sleep(600);
                            }
                            system("cls");
                        }else {
                            fflush(stdin);
                            printf("\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_IV();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Delete another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_IV();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_IV();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            case 3: // CASE FOR EDIT
                    fp_LIST_AVAILABLE = fopen("REGION4_A_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]EDIT PROVINCE          \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to edit::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) {
                            printf("\t\t\t\t\t    [%d]   %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      ---------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to edit: ");
                        scanf("%d",&n);
                        fp_EDIT = fopen("REGION4_A_PROVINCES.txt","r");
                        while(fscanf(fp_EDIT,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if(n == r1_p[d].PROVINCE_ID) {
                                   foundID = 1;
                                }
                            d++;
                        }
                        fclose(fp_EDIT);
                        if(foundID == 1) {
                            fp_EDIT = fopen("REGION4_A_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION4_A_TEMP.txt","w");
                            foundID = 0;
                            while(fscanf(fp_EDIT,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[e].PROVINCE_ID) == 1 ) {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       You choose [%s] to edit.\n\n",r1_p[e].PROVINCE_NAME);
                                    printf("\t\t\t\t\t       Edit province your selected: ");
                                    scanf("%s",&r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Editing please wait");
                                    for(j = 0; j < 3; j++) {
                                        printf(".");
                                        Sleep(600);
                                    }
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                }else {
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                }
                                e++;
                            }
                            fclose(fp_EDIT);
                            fclose(fp_TEMP);
                            remove("REGION4_A_PROVINCES.txt");
                            rename("REGION4_A_TEMP.txt","REGION4_A_PROVINCES.txt");
                        }else {
                            fflush(stdin);
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_IV();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        system("cls");
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       Edit another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_IV();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_IV();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            default:
                system("cls"); // used to clear the previous screen
                system("color 0C");
                printf("\n\n\n\n\n\n\n\n\t\t\t   NOTE[!]: You input an invalid menu please choose correctly to avoid error.");
                getch();
                system("cls"); // used to clear the previous screen
                REGION_IV(); // call function for validation
                break;
            } // closing brackets for switch(i)
           }else if(ch1 == 'b' || ch1 == 'B') {
                system("cls");
                REGION_IV();
           }else {
                system("cls");
                MENU();
           }
        }
    }else if(num == 2) {
            fp_READ1 = fopen("REGION4_B_PROVINCES.txt","r"); // opening a file for append
            if(fp_READ1 == NULL) { // checking if the file is in the location
                printf("The file REGION4_B_PROVINCES.txt was not found!\n");
                exit(1);
            }else {
                system("cls");
               printf("\n");
               printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
               printf("\t\t\t\t\t  \xb       REGION (IV-B) PROVINCES       \xb\n");
               printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                while(fscanf(fp_READ1,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // reading a file until the end of file
                    i++;
                }
                for(c = 0; c < i; c++) {
                    for(j = c + 1; j < i; j++) {
                        if(r1_p[c].PROVINCE_ID > r1_p[j].PROVINCE_ID) {
                            swap = r1_p[c];
                            r1_p[c] = r1_p[j];
                            r1_p[j] = swap;
                        }
                    }
                }
                fp_TRANSFER = fopen("REGION4_B_PROVINCES.txt","w");
                for(c = 0; c < i; c++) {
                    fprintf(fp_TRANSFER,"%d %s\n",r1_p[c].PROVINCE_ID,r1_p[c].PROVINCE_NAME);
                }
                fclose(fp_TRANSFER);
                fclose(fp_READ1);
                fp_READ2 = fopen("REGION4_B_PROVINCES.txt","r");
                   while(fscanf(fp_READ2,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                        printf("\n\t\t\t\t\t  [%d]     %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                        d++;
                   }
                fclose(fp_READ2);
               fclose(fp_READ1); // closing the file fp_READ
               printf("\n");
               fflush(stdin); // avoid input jumping in to another
               printf("\n");
               printf("\t\t\t\t\t  ---------------------------------------\n");
               printf("\t\t\t\t\t  Continue to ADD, DELETE, EDIT?[Y/N/B]: ");
               scanf("%c",&ch1);
               if(ch1 == 'Y' || ch1 == 'y') {
                    system("cls"); // used to clear the previous screen
                    printf("\n");
                    printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                    printf("\t\t\t\t\t      \xb        [1]ADD           \xb\n");
                    printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                    printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                    printf("\t\t\t\t\t      \xb        [2]DELETE        \xb\n");
                    printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                    printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                    printf("\t\t\t\t\t      \xb        [3]EDIT          \xb\n");
                    printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                    printf("\n");
                    printf("\t\t\t\t\t      Choose [n] to operate: ");
                    scanf("%d",&i);
                    switch(i) { // switch cases for choosing a menu
            case 1: // CASE FOR ADD PROVINCE
                    fp_ADD = fopen("REGION4_B_PROVINCES.txt","a"); // opening a file for append
                    if(fp_ADD == NULL) { // checking if the file is in the location
                        printf("The file was not found!\n");
                        exit(1);
                    }else {
                        system("cls"); // used to clear the previous screen
                        printf("\n\t\tUsed underscore '_' or any character when you add a province name with a spaces to avoid (error)!");
                        printf("\n\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb              [1]ADD               \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        fflush(stdin);
                        printf("\t\t\t\t\t    Enter province unique number to add: ");
                        scanf("%d",&province_num); // enter province id
                        fp_READ3 = fopen("REGION4_B_PROVINCES.txt","r"); // opening file for reading
                        while(fscanf(fp_READ3,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) { // scanning to the file
                            e++;
                        }
                        for(j = 0; j < e; j++) {
                            if(province_num == r1_p[j].PROVINCE_ID) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province ID you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_IV(); // call the function
                                break;
                            }
                        }
                        fclose(fp_READ3); // closing the file
                        printf("\n");
                        fflush(stdin); // avoid  jumping to another
                        printf("\t\t\t\t\t    Enter province name to add: ");
                        scanf("%s",&province_name); // enter province name
                        fp_READ4 = fopen("REGION4_B_PROVINCES.txt","r"); // opening file
                        while(fscanf(fp_READ4,"%d %s", &r1_p[i].PROVINCE_ID, &r1_p[i].PROVINCE_NAME) != EOF) { // scanning to the file
                            i++;
                        }
                        for(j = 0; j < i; j++) {
                            if(strcmp(province_name,r1_p[j].PROVINCE_NAME) == 0) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province NAME you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_IV(); // call the function
                                break;
                            }
                        }
                        fprintf(fp_ADD,"%d %s\n",province_num,province_name); // printing to the file
                        fclose(fp_ADD); // closing file
                        fclose(fp_READ4); // closing file fo adding provinces
                        printf("\n");
                        fflush(stdin); // avoid input jumping in to another
                        printf("\t\t\t\t\t    Add another province? or Back?[Y/N/B]: ");
                        scanf("%c",&ch1);
                        if(ch1 == 'Y' || ch1 == 'y') {
                            system("cls"); // used to clear the previous screen
                            REGION_IV(); // call again the function if condition is true
                        }else if(ch1 == 'B' || ch1 == 'b') {
                            system("cls"); // used to clear the previous screen
                            REGION_IV(); // call again the function if condition is true
                        }else {
                            system("cls"); // used to clear the previous screen
                            MENU(); // call main function if condition is false
                        }
                    }
                break;
            case 2: // CASE FOR DELETE PROVINCE
                    fp_LIST_AVAILABLE = fopen("REGION4_B_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE  == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]DELETE PROVINCE        \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to delete[!]::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // list of all province that available to delete
                             printf("\t\t\t\t\t    [%d] %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      -----------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to delete: ");
                        scanf("%d",&n);
                        fp_DELETE = fopen("REGION4_B_PROVINCES.txt","r");
                        printf("\n");
                        while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                            if(n == r1_p[d].PROVINCE_ID) {
                               foundID = 1;
                            }
                            d++;
                        }
                        fclose(fp_DELETE);
                        if(foundID == 1) {
                            fp_DELETE = fopen("REGION4_B_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION4_B_TEMP.txt","w");
                            foundID = 0;
                           while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[d].PROVINCE_ID) == 0 ) {
                                   fprintf(fp_TEMP,"%d %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                                }
                                d++;
                            }
                            fclose(fp_DELETE);
                            fclose(fp_TEMP);
                            remove("REGION4_B_PROVINCES.txt");
                            rename("REGION4_B_TEMP.txt","REGION4_B_PROVINCES.txt");
                            printf("\n");
                            system("cls");
                            system("color 0C");
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Deleting please wait");
                            for(c = 0; c < 3; c++) {
                                printf(".");
                                Sleep(600);
                            }
                            system("cls");
                        }else {
                            fflush(stdin);
                            printf("\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_IV();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t    Delete another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_IV();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_IV();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            case 3: // CASE FOR EDIT
                    fp_LIST_AVAILABLE = fopen("REGION4_B_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]EDIT PROVINCE          \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to edit::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) {
                            printf("\t\t\t\t\t    [%d]   %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      ---------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to edit: ");
                        scanf("%d",&n);
                        fp_EDIT = fopen("REGION4_B_PROVINCES.txt","r");
                        while(fscanf(fp_EDIT,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if(n == r1_p[d].PROVINCE_ID) {
                                   foundID = 1;
                                }
                            d++;
                        }
                        fclose(fp_EDIT);
                        if(foundID == 1) {
                            fp_EDIT = fopen("REGION4_B_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION4_B_TEMP.txt","w");
                            foundID = 0;
                            while(fscanf(fp_EDIT,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[e].PROVINCE_ID) == 1 ) {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       You choose [%s] to edit.\n\n",r1_p[e].PROVINCE_NAME);
                                    printf("\t\t\t\t\t       Edit province your selected: ");
                                    scanf("%s",&r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Editing please wait");
                                    for(j = 0; j < 3; j++) {
                                        printf(".");
                                        Sleep(600);
                                    }
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                }else {
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                }
                                e++;
                            }
                            fclose(fp_EDIT);
                            fclose(fp_TEMP);
                            remove("REGION4_B_PROVINCES.txt");
                            rename("REGION4_B_TEMP.txt","REGION4_B_PROVINCES.txt");
                        }else {
                            fflush(stdin);
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_IV();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        system("cls");
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       Edit another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_IV();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_IV();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            default:
                system("cls");
                system("color 0C");
                printf("\n\n\n\n\n\n\n\n\t\t\t   NOTE[!]: You input an invalid menu please choose correctly to avoid error.");
                getch();
                system("cls");
                REGION_IV();
                break;
            } // switch closing bracket
                }else if(ch1 == 'B' || ch1 == 'b') {
                    system("cls");
                    REGION_IV();
               }else {
                    system("cls");
                    MENU();
               }
            }
    }else {
        system("cls"); // used to clear the previous screen
        system("color 0C");
        printf("\n\n\n\n\n\n\n\n\t\t\t   NOTE[!]: You input an invalid menu please choose correctly to avoid error.");
        getch();
        system("cls"); // used to clear the previous screen
        REGION_IV(); // call function for validation
    }
}
void REGION_V() {
    system("color 0A");
    char ch1,ch2,ch3,ch4,ch5,province_name[100];
    int i = 0, c, j, d = 0, e = 0, f = 0, province_num, n, foundID = 0;
    FILE *fp_ADD; // declaring a file pointer
    FILE *fp_DELETE; // declaring a file pointer
    FILE *fp_TEMP; // declaring a file pointer
    FILE *fp_RECOVER; // declaring a file pointer
    FILE *fp_EDIT; // declaring a file pointer
    FILE *fp_LIST_AVAILABLE;
    FILE *fp_READ1, *fp_READ2, *fp_READ3, *fp_READ4, *fp_TRANSFER; // declaring a file pointer
    fp_READ1 = fopen("REGION5_PROVINCES.txt","r"); // opening a file for reading
    if(fp_READ1 == NULL) { // checking if the file is in the location
        printf("The file REGION5_PROVINCES.txt was not found!\n");
        exit(1);
    }else {
       printf("\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       printf("\t\t\t\t\t  \xb        REGION-(V) PROVINCES         \xb\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       while(fscanf(fp_READ1,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // reading a file until the end of file
            i++;
       }
        for(c = 0; c < i; c++) {
            for(j = c + 1; j < i; j++) {
                if(r1_p[c].PROVINCE_ID > r1_p[j].PROVINCE_ID) {
                    swap = r1_p[c];
                    r1_p[c] = r1_p[j];
                    r1_p[j] = swap;
                }
            }
        }
        fp_TRANSFER = fopen("REGION5_PROVINCES.txt","w");
        for(c = 0; c < i; c++) {
            fprintf(fp_TRANSFER,"%d %s\n",r1_p[c].PROVINCE_ID,r1_p[c].PROVINCE_NAME);
        }
        fclose(fp_TRANSFER);
        fclose(fp_READ1);
        fp_READ2 = fopen("REGION5_PROVINCES.txt","r");
           while(fscanf(fp_READ2,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                printf("\n\t\t\t\t\t  [%d]     %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                d++;
           }
        fclose(fp_READ2);
        printf("\n\n");
        printf("\t\t\t\t\t  ---------------------------------------\n");
        fflush(stdin); // avoid jumping to another input
        printf("\t\t\t\t\t  Continue to ADD, DELETE, EDIT?[Y/N]: ");
        scanf("%c",&ch1);
       if(ch1 == 'Y' || ch1 == 'y') {
            system("cls"); // used to clear the previous screen
            printf("\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [1]ADD           \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [2]DELETE        \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [3]EDIT          \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\n");
            printf("\t\t\t\t\t      Choose [n] to operate: ");
            scanf("%d",&i);
            switch(i) { // switch cases for choosing a menu
            case 1: // CASE FOR ADD PROVINCE
                    fp_ADD = fopen("REGION5_PROVINCES.txt","a"); // opening a file for append
                    if(fp_ADD == NULL) { // checking if the file is in the location
                        printf("The file was not found!\n");
                        exit(1);
                    }else {
                        system("cls"); // used to clear the previous screen
                        printf("\n\t\tUsed underscore '_' or any character when you add a province name with a spaces to avoid (error)!");
                        printf("\n\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb              [1]ADD               \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    Enter province unique number to add: ");
                        scanf("%d",&province_num); // enter province id
                        fp_READ3 = fopen("REGION5_PROVINCES.txt","r"); // opening file for reading
                        while(fscanf(fp_READ3,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) { // scanning to the file
                            e++;
                        }
                        for(j = 0; j < e; j++) {
                            if(province_num == r1_p[j].PROVINCE_ID) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province ID you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_V(); // call the function
                                break;
                            }
                        }
                        fclose(fp_READ3); // closing the file
                        printf("\n");
                        fflush(stdin); // avoid  jumping to another
                        printf("\t\t\t\t\t    Enter province name to add: ");
                        scanf("%s",&province_name); // enter province name
                        fp_READ4 = fopen("REGION5_PROVINCES.txt","r"); // opening file
                        while(fscanf(fp_READ4,"%d %s", &r1_p[i].PROVINCE_ID, &r1_p[i].PROVINCE_NAME) != EOF) { // scanning to the file
                            i++;
                        }
                        for(j = 0; j < i; j++) {
                            if(strcmp(province_name,r1_p[j].PROVINCE_NAME) == 0) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province NAME you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_V(); // call the function
                                break;
                            }
                        }
                        fprintf(fp_ADD,"%d %s\n",province_num,province_name); // printing to the file
                        fclose(fp_ADD); // closing file
                        fclose(fp_READ4); // closing file fo adding provinces
                        printf("\n");
                        fflush(stdin); // avoid input jumping in to another
                        printf("\t\t\t\t\t    Add another province? or Back?[Y/N/B]: ");
                        scanf("%c",&ch1);
                        if(ch1 == 'Y' || ch1 == 'y') {
                            system("cls"); // used to clear the previous screen
                            REGION_V(); // call again the function if condition is true
                        }else if(ch1 == 'B' || ch1 == 'b') {
                            system("cls"); // used to clear the previous screen
                            REGION_V(); // call again the function if condition is true
                        }else {
                            system("cls"); // used to clear the previous screen
                            MENU(); // call main function if condition is false
                        }
                    }
                break;
            case 2: // CASE FOR DELETE PROVINCE
                    fp_LIST_AVAILABLE = fopen("REGION5_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE  == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]DELETE PROVINCE        \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to delete[!]::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // list of all province that available to delete
                             printf("\t\t\t\t\t    [%d] %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      -----------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to delete: ");
                        scanf("%d",&n);
                        fp_DELETE = fopen("REGION5_PROVINCES.txt","r");
                        printf("\n");
                        while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                            if(n == r1_p[d].PROVINCE_ID) {
                               foundID = 1;
                            }
                            d++;
                        }
                        fclose(fp_DELETE);
                        if(foundID == 1) {
                            fp_DELETE = fopen("REGION5_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION5_TEMP.txt","w");
                            foundID = 0;
                           while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[d].PROVINCE_ID) == 0 ) {
                                   fprintf(fp_TEMP,"%d %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                                }
                                d++;
                            }
                            fclose(fp_DELETE);
                            fclose(fp_TEMP);
                            remove("REGION5_PROVINCES.txt");
                            rename("REGION5_TEMP.txt","REGION5_PROVINCES.txt");
                            printf("\n");
                            system("cls");
                            system("color 0C");
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Deleting please wait");
                            for(c = 0; c < 3; c++) {
                                printf(".");
                                Sleep(600);
                            }
                            system("cls");
                        }else {
                            fflush(stdin);
                            printf("\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_V();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t    Delete another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_V();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_V();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            case 3: // CASE FOR EDIT
                    fp_LIST_AVAILABLE = fopen("REGION5_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]EDIT PROVINCE          \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to edit::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) {
                            printf("\t\t\t\t\t    [%d]   %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      ---------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to edit: ");
                        scanf("%d",&n);
                        fp_EDIT = fopen("REGION5_PROVINCES.txt","r");
                        while(fscanf(fp_EDIT,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if(n == r1_p[d].PROVINCE_ID) {
                                   foundID = 1;
                                }
                            d++;
                        }
                        fclose(fp_EDIT);
                        if(foundID == 1) {
                            fp_EDIT = fopen("REGION5_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION5_TEMP.txt","w");
                            foundID = 0;
                            while(fscanf(fp_EDIT,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[e].PROVINCE_ID) == 1 ) {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       You choose [%s] to edit.\n\n",r1_p[e].PROVINCE_NAME);
                                    printf("\t\t\t\t\t       Edit province your selected: ");
                                    scanf("%s",&r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Editing please wait");
                                    for(j = 0; j < 3; j++) {
                                        printf(".");
                                        Sleep(600);
                                    }
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                }else {
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                }
                                e++;
                            }
                            fclose(fp_EDIT);
                            fclose(fp_TEMP);
                            remove("REGION5_PROVINCES.txt");
                            rename("REGION5_TEMP.txt","REGION5_PROVINCES.txt");
                        }else {
                            fflush(stdin);
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_V();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        system("cls");
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       Edit another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_V();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_V();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            default:
                system("cls"); // used to clear the previous screen
                system("color 0C");
                printf("\n\n\n\n\n\n\n\n\t\t\t   NOTE[!]: You input an invalid menu please choose correctly to avoid error.");
                getch();
                system("cls"); // used to clear the previous screen
                REGION_V(); // call function for validation
                break;
            } // closing brackets for switch(i)
       }else {
            system("cls"); // used to clear the previous screen
            MENU(); // call main function if condition is false
       } // closing bracket for if(ch1 == 'Y' || ch1 == 'y')
    } // fp_READ else closing bracket
}
void REGION_VI() {
     system("color 0A");
    char ch1,ch2,ch3,ch4,ch5,province_name[100];
    int i = 0, c, j, d = 0, e = 0, f = 0, province_num, n, foundID = 0;
    FILE *fp_ADD; // declaring a file pointer
    FILE *fp_DELETE; // declaring a file pointer
    FILE *fp_TEMP; // declaring a file pointer
    FILE *fp_RECOVER; // declaring a file pointer
    FILE *fp_EDIT; // declaring a file pointer
    FILE *fp_LIST_AVAILABLE;
    FILE *fp_READ1, *fp_READ2, *fp_READ3, *fp_READ4, *fp_TRANSFER; // declaring a file pointer
    fp_READ1 = fopen("REGION6_PROVINCES.txt","r"); // opening a file for reading
    if(fp_READ1 == NULL) { // checking if the file is in the location
        printf("The file REGION6_PROVINCES.txt was not found!\n");
        exit(1);
    }else {
       printf("\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       printf("\t\t\t\t\t  \xb        REGION-(VI) PROVINCES        \xb\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       while(fscanf(fp_READ1,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // reading a file until the end of file
            i++;
       }
        for(c = 0; c < i; c++) {
            for(j = c + 1; j < i; j++) {
                if(r1_p[c].PROVINCE_ID > r1_p[j].PROVINCE_ID) {
                    swap = r1_p[c];
                    r1_p[c] = r1_p[j];
                    r1_p[j] = swap;
                }
            }
        }
        fp_TRANSFER = fopen("REGION6_PROVINCES.txt","w");
        for(c = 0; c < i; c++) {
            fprintf(fp_TRANSFER,"%d %s\n",r1_p[c].PROVINCE_ID,r1_p[c].PROVINCE_NAME);
        }
        fclose(fp_TRANSFER);
        fclose(fp_READ1);
        fp_READ2 = fopen("REGION6_PROVINCES.txt","r");
           while(fscanf(fp_READ2,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                printf("\n\t\t\t\t\t  [%d]     %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                d++;
           }
        fclose(fp_READ2);
        printf("\n\n");
        printf("\t\t\t\t\t  ---------------------------------------\n");
        fflush(stdin); // avoid jumping to another input
        printf("\t\t\t\t\t  Continue to ADD, DELETE, EDIT?[Y/N]: ");
        scanf("%c",&ch1);
       if(ch1 == 'Y' || ch1 == 'y') {
            system("cls"); // used to clear the previous screen
            printf("\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [1]ADD           \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [2]DELETE        \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [3]EDIT          \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\n");
            printf("\t\t\t\t\t      Choose [n] to operate: ");
            scanf("%d",&i);
            switch(i) { // switch cases for choosing a menu
            case 1: // CASE FOR ADD PROVINCE
                    fp_ADD = fopen("REGION6_PROVINCES.txt","a"); // opening a file for append
                    if(fp_ADD == NULL) { // checking if the file is in the location
                        printf("The file was not found!\n");
                        exit(1);
                    }else {
                        system("cls"); // used to clear the previous screen
                        printf("\n\t\tUsed underscore '_' or any character when you add a province name with a spaces to avoid (error)!");
                        printf("\n\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb              [1]ADD               \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    Enter province unique number to add: ");
                        scanf("%d",&province_num); // enter province id
                        fp_READ3 = fopen("REGION6_PROVINCES.txt","r"); // opening file for reading
                        while(fscanf(fp_READ3,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) { // scanning to the file
                            e++;
                        }
                        for(j = 0; j < e; j++) {
                            if(province_num == r1_p[j].PROVINCE_ID) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province ID you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_VI(); // call the function
                                break;
                            }
                        }
                        fclose(fp_READ3); // closing the file
                        printf("\n");
                        fflush(stdin); // avoid  jumping to another
                        printf("\t\t\t\t\t    Enter province name to add: ");
                        scanf("%s",&province_name); // enter province name
                        fp_READ4 = fopen("REGION6_PROVINCES.txt","r"); // opening file
                        while(fscanf(fp_READ4,"%d %s", &r1_p[i].PROVINCE_ID, &r1_p[i].PROVINCE_NAME) != EOF) { // scanning to the file
                            i++;
                        }
                        for(j = 0; j < i; j++) {
                            if(strcmp(province_name,r1_p[j].PROVINCE_NAME) == 0) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province NAME you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_VI(); // call the function
                                break;
                            }
                        }
                        fprintf(fp_ADD,"%d %s\n",province_num,province_name); // printing to the file
                        fclose(fp_ADD); // closing file
                        fclose(fp_READ4); // closing file fo adding provinces
                        printf("\n");
                        fflush(stdin); // avoid input jumping in to another
                        printf("\t\t\t\t\t    Add another province? or Back?[Y/N/B]: ");
                        scanf("%c",&ch1);
                        if(ch1 == 'Y' || ch1 == 'y') {
                            system("cls"); // used to clear the previous screen
                            REGION_VI(); // call again the function if condition is true
                        }else if(ch1 == 'B' || ch1 == 'b') {
                            system("cls"); // used to clear the previous screen
                            REGION_VI(); // call again the function if condition is true
                        }else {
                            system("cls"); // used to clear the previous screen
                            MENU(); // call main function if condition is false
                        }
                    }
                break;
            case 2: // CASE FOR DELETE PROVINCE
                    fp_LIST_AVAILABLE = fopen("REGION6_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE  == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]DELETE PROVINCE        \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to delete[!]::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // list of all province that available to delete
                             printf("\t\t\t\t\t    [%d] %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      -----------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to delete: ");
                        scanf("%d",&n);
                        fp_DELETE = fopen("REGION6_PROVINCES.txt","r");
                        printf("\n");
                        while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                            if(n == r1_p[d].PROVINCE_ID) {
                               foundID = 1;
                            }
                            d++;
                        }
                        fclose(fp_DELETE);
                        if(foundID == 1) {
                            fp_DELETE = fopen("REGION6_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION6_TEMP.txt","w");
                            foundID = 0;
                           while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[d].PROVINCE_ID) == 0 ) {
                                   fprintf(fp_TEMP,"%d %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                                }
                                d++;
                            }
                            fclose(fp_DELETE);
                            fclose(fp_TEMP);
                            remove("REGION6_PROVINCES.txt");
                            rename("REGION6_TEMP.txt","REGION6_PROVINCES.txt");
                            printf("\n");
                            system("cls");
                            system("color 0C");
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Deleting please wait");
                            for(c = 0; c < 3; c++) {
                                printf(".");
                                Sleep(600);
                            }
                            system("cls");
                        }else {
                            fflush(stdin);
                            printf("\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_VI();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Delete another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_VI();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_VI();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            case 3: // CASE FOR EDIT
                    fp_LIST_AVAILABLE = fopen("REGION6_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]EDIT PROVINCE          \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to edit::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) {
                            printf("\t\t\t\t\t    [%d]   %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      ---------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to edit: ");
                        scanf("%d",&n);
                        fp_EDIT = fopen("REGION6_PROVINCES.txt","r");
                        while(fscanf(fp_EDIT,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if(n == r1_p[d].PROVINCE_ID) {
                                   foundID = 1;
                                }
                            d++;
                        }
                        fclose(fp_EDIT);
                        if(foundID == 1) {
                            fp_EDIT = fopen("REGION6_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION6_TEMP.txt","w");
                            foundID = 0;
                            while(fscanf(fp_EDIT,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[e].PROVINCE_ID) == 1 ) {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       You choose [%s] to edit.\n\n",r1_p[e].PROVINCE_NAME);
                                    printf("\t\t\t\t\t       Edit province your selected: ");
                                    scanf("%s",&r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Editing please wait");
                                    for(j = 0; j < 3; j++) {
                                        printf(".");
                                        Sleep(600);
                                    }
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                }else {
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                }
                                e++;
                            }
                            fclose(fp_EDIT);
                            fclose(fp_TEMP);
                            remove("REGION6_PROVINCES.txt");
                            rename("REGION6_TEMP.txt","REGION6_PROVINCES.txt");
                        }else {
                            fflush(stdin);
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_VI();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        system("cls");
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       Edit another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_VI();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_VI();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            default:
                system("cls"); // used to clear the previous screen
                system("color 0C");
                printf("\n\n\n\n\n\n\n\n\t\t\t   NOTE[!]: You input an invalid menu please choose correctly to avoid error.");
                getch();
                system("cls"); // used to clear the previous screen
                REGION_VI(); // call function for validation
                break;
            } // closing brackets for switch(i)
       }else {
            system("cls"); // used to clear the previous screen
            MENU(); // call main function if condition is false
       } // closing bracket for if(ch1 == 'Y' || ch1 == 'y')
    } // fp_READ else closing bracket
}
void REGION_VII() {
     system("color 0A");
    char ch1,ch2,ch3,ch4,ch5,province_name[100];
    int i = 0, c, j, d = 0, e = 0, f = 0, province_num, n, foundID = 0;
    FILE *fp_ADD; // declaring a file pointer
    FILE *fp_DELETE; // declaring a file pointer
    FILE *fp_TEMP; // declaring a file pointer
    FILE *fp_RECOVER; // declaring a file pointer
    FILE *fp_EDIT; // declaring a file pointer
    FILE *fp_LIST_AVAILABLE;
    FILE *fp_READ1, *fp_READ2, *fp_READ3, *fp_READ4, *fp_TRANSFER; // declaring a file pointer
    fp_READ1 = fopen("REGION7_PROVINCES.txt","r"); // opening a file for reading
    if(fp_READ1 == NULL) { // checking if the file is in the location
        printf("The file REGION7_PROVINCES.txt was not found!\n");
        exit(1);
    }else {
       printf("\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       printf("\t\t\t\t\t  \xb        REGION-(VII) PROVINCES       \xb\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       while(fscanf(fp_READ1,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // reading a file until the end of file
            i++;
       }
        for(c = 0; c < i; c++) {
            for(j = c + 1; j < i; j++) {
                if(r1_p[c].PROVINCE_ID > r1_p[j].PROVINCE_ID) {
                    swap = r1_p[c];
                    r1_p[c] = r1_p[j];
                    r1_p[j] = swap;
                }
            }
        }
        fp_TRANSFER = fopen("REGION7_PROVINCES.txt","w");
        for(c = 0; c < i; c++) {
            fprintf(fp_TRANSFER,"%d %s\n",r1_p[c].PROVINCE_ID,r1_p[c].PROVINCE_NAME);
        }
        fclose(fp_TRANSFER);
        fclose(fp_READ1);
        fp_READ2 = fopen("REGION7_PROVINCES.txt","r");
           while(fscanf(fp_READ2,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                printf("\n\t\t\t\t\t  [%d]     %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                d++;
           }
        fclose(fp_READ2);
        printf("\n\n");
        printf("\t\t\t\t\t  ---------------------------------------\n");
        fflush(stdin); // avoid jumping to another input
        printf("\t\t\t\t\t  Continue to ADD, DELETE, EDIT?[Y/N]: ");
        scanf("%c",&ch1);
       if(ch1 == 'Y' || ch1 == 'y') {
            system("cls"); // used to clear the previous screen
            printf("\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [1]ADD           \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [2]DELETE        \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [3]EDIT          \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\n");
            printf("\t\t\t\t\t      Choose [n] to operate: ");
            scanf("%d",&i);
            switch(i) { // switch cases for choosing a menu
            case 1: // CASE FOR ADD PROVINCE
                    fp_ADD = fopen("REGION7_PROVINCES.txt","a"); // opening a file for append
                    if(fp_ADD == NULL) { // checking if the file is in the location
                        printf("The file was not found!\n");
                        exit(1);
                    }else {
                        system("cls"); // used to clear the previous screen
                        printf("\n\t\tUsed underscore '_' or any character when you add a province name with a spaces to avoid (error)!");
                        printf("\n\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb              [1]ADD               \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    Enter province unique number to add: ");
                        scanf("%d",&province_num); // enter province id
                        fp_READ3 = fopen("REGION7_PROVINCES.txt","r"); // opening file for reading
                        while(fscanf(fp_READ3,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) { // scanning to the file
                            e++;
                        }
                        for(j = 0; j < e; j++) {
                            if(province_num == r1_p[j].PROVINCE_ID) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province ID you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_VII(); // call the function
                                break;
                            }
                        }
                        fclose(fp_READ3); // closing the file
                        printf("\n");
                        fflush(stdin); // avoid  jumping to another
                        printf("\t\t\t\t\t    Enter province name to add: ");
                        scanf("%s",&province_name); // enter province name
                        fp_READ4 = fopen("REGION7_PROVINCES.txt","r"); // opening file
                        while(fscanf(fp_READ4,"%d %s", &r1_p[i].PROVINCE_ID, &r1_p[i].PROVINCE_NAME) != EOF) { // scanning to the file
                            i++;
                        }
                        for(j = 0; j < i; j++) {
                            if(strcmp(province_name,r1_p[j].PROVINCE_NAME) == 0) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province NAME you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_VII(); // call the function
                                break;
                            }
                        }
                        fprintf(fp_ADD,"%d %s\n",province_num,province_name); // printing to the file
                        fclose(fp_ADD); // closing file
                        fclose(fp_READ4); // closing file fo adding provinces
                        printf("\n");
                        fflush(stdin); // avoid input jumping in to another
                        printf("\t\t\t\t\t    Add another province? or Back?[Y/N/B]: ");
                        scanf("%c",&ch1);
                        if(ch1 == 'Y' || ch1 == 'y') {
                            system("cls"); // used to clear the previous screen
                            REGION_VII(); // call again the function if condition is true
                        }else if(ch1 == 'B' || ch1 == 'b') {
                            system("cls"); // used to clear the previous screen
                            REGION_VII(); // call again the function if condition is true
                        }else {
                            system("cls"); // used to clear the previous screen
                            MENU(); // call main function if condition is false
                        }
                    }
                break;
            case 2: // CASE FOR DELETE PROVINCE
                    fp_LIST_AVAILABLE = fopen("REGION7_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE  == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]DELETE PROVINCE        \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to delete[!]::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // list of all province that available to delete
                             printf("\t\t\t\t\t    [%d] %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      -----------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to delete: ");
                        scanf("%d",&n);
                        fp_DELETE = fopen("REGION7_PROVINCES.txt","r");
                        printf("\n");
                        while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                            if(n == r1_p[d].PROVINCE_ID) {
                               foundID = 1;
                            }
                            d++;
                        }
                        fclose(fp_DELETE);
                        if(foundID == 1) {
                            fp_DELETE = fopen("REGION7_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION7_TEMP.txt","w");
                            foundID = 0;
                           while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[d].PROVINCE_ID) == 0 ) {
                                   fprintf(fp_TEMP,"%d %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                                }
                                d++;
                            }
                            fclose(fp_DELETE);
                            fclose(fp_TEMP);
                            remove("REGION7_PROVINCES.txt");
                            rename("REGION7_TEMP.txt","REGION7_PROVINCES.txt");
                            printf("\n");
                            system("cls");
                            system("color 0C");
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Deleting please wait");
                            for(c = 0; c < 3; c++) {
                                printf(".");
                                Sleep(600);
                            }
                            system("cls");
                        }else {
                            fflush(stdin);
                            printf("\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_VII();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t    Delete another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_VII();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_VII();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            case 3: // CASE FOR EDIT
                    fp_LIST_AVAILABLE = fopen("REGION7_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]EDIT PROVINCE          \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to edit::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) {
                            printf("\t\t\t\t\t    [%d]   %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      ---------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to edit: ");
                        scanf("%d",&n);
                        fp_EDIT = fopen("REGION7_PROVINCES.txt","r");
                        while(fscanf(fp_EDIT,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if(n == r1_p[d].PROVINCE_ID) {
                                   foundID = 1;
                                }
                            d++;
                        }
                        fclose(fp_EDIT);
                        if(foundID == 1) {
                            fp_EDIT = fopen("REGION7_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION7_TEMP.txt","w");
                            foundID = 0;
                            while(fscanf(fp_EDIT,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[e].PROVINCE_ID) == 1 ) {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       You choose [%s] to edit.\n\n",r1_p[e].PROVINCE_NAME);
                                    printf("\t\t\t\t\t       Edit province your selected: ");
                                    scanf("%s",&r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Editing please wait");
                                    for(j = 0; j < 3; j++) {
                                        printf(".");
                                        Sleep(600);
                                    }
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                }else {
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                }
                                e++;
                            }
                            fclose(fp_EDIT);
                            fclose(fp_TEMP);
                            remove("REGION7_PROVINCES.txt");
                            rename("REGION7_TEMP.txt","REGION7_PROVINCES.txt");
                        }else {
                            fflush(stdin);
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_VII();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        system("cls");
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       Edit another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_VII();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_VII();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            default:
                system("cls"); // used to clear the previous screen
                system("color 0C");
                printf("\n\n\n\n\n\n\n\n\t\t\t   NOTE[!]: You input an invalid menu please choose correctly to avoid error.");
                getch();
                system("cls"); // used to clear the previous screen
                REGION_VII(); // call function for validation
                break;
            } // closing brackets for switch(i)
       }else {
            system("cls"); // used to clear the previous screen
            MENU(); // call main function if condition is false
       } // closing bracket for if(ch1 == 'Y' || ch1 == 'y')
    } // fp_READ else closing bracket
}
void REGION_VIII() {
    system("color 0A");
    char ch1,ch2,ch3,ch4,ch5,province_name[100];
    int i = 0, c, j, d = 0, e = 0, f = 0, province_num, n, foundID = 0;
    FILE *fp_ADD; // declaring a file pointer
    FILE *fp_DELETE; // declaring a file pointer
    FILE *fp_TEMP; // declaring a file pointer
    FILE *fp_RECOVER; // declaring a file pointer
    FILE *fp_EDIT; // declaring a file pointer
    FILE *fp_LIST_AVAILABLE;
    FILE *fp_READ1, *fp_READ2, *fp_READ3, *fp_READ4, *fp_TRANSFER; // declaring a file pointer
    fp_READ1 = fopen("REGION8_PROVINCES.txt","r"); // opening a file for reading
    if(fp_READ1 == NULL) { // checking if the file is in the location
        printf("The file REGION8_PROVINCES.txt was not found!\n");
        exit(1);
    }else {
       printf("\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       printf("\t\t\t\t\t  \xb        REGION-(VIII) PROVINCES      \xb\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       while(fscanf(fp_READ1,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // reading a file until the end of file
            i++;
       }
        for(c = 0; c < i; c++) {
            for(j = c + 1; j < i; j++) {
                if(r1_p[c].PROVINCE_ID > r1_p[j].PROVINCE_ID) {
                    swap = r1_p[c];
                    r1_p[c] = r1_p[j];
                    r1_p[j] = swap;
                }
            }
        }
        fp_TRANSFER = fopen("REGION8_PROVINCES.txt","w");
        for(c = 0; c < i; c++) {
            fprintf(fp_TRANSFER,"%d %s\n",r1_p[c].PROVINCE_ID,r1_p[c].PROVINCE_NAME);
        }
        fclose(fp_TRANSFER);
        fclose(fp_READ1);
        fp_READ2 = fopen("REGION8_PROVINCES.txt","r");
           while(fscanf(fp_READ2,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                printf("\n\t\t\t\t\t  [%d]     %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                d++;
           }
        fclose(fp_READ2);
        printf("\n\n");
        printf("\t\t\t\t\t  ---------------------------------------\n");
        fflush(stdin); // avoid jumping to another input
        printf("\t\t\t\t\t  Continue to ADD, DELETE, EDIT?[Y/N]: ");
        scanf("%c",&ch1);
       if(ch1 == 'Y' || ch1 == 'y') {
            system("cls"); // used to clear the previous screen
            printf("\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [1]ADD           \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [2]DELETE        \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [3]EDIT          \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\n");
            printf("\t\t\t\t\t      Choose [n] to operate: ");
            scanf("%d",&i);
            switch(i) { // switch cases for choosing a menu
            case 1: // CASE FOR ADD PROVINCE
                    fp_ADD = fopen("E:/PROJECT_summer/REGION8_PROVINCES.txt","a"); // opening a file for append
                    if(fp_ADD == NULL) { // checking if the file is in the location
                        printf("The file was not found!\n");
                        exit(1);
                    }else {
                        system("cls"); // used to clear the previous screen
                        printf("\n\t\tUsed underscore '_' or any character when you add a province name with a spaces to avoid (error)!");
                        printf("\n\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb              [1]ADD               \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    Enter province unique number to add: ");
                        scanf("%d",&province_num); // enter province id
                        fp_READ3 = fopen("REGION8_PROVINCES.txt","r"); // opening file for reading
                        while(fscanf(fp_READ3,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) { // scanning to the file
                            e++;
                        }
                        for(j = 0; j < e; j++) {
                            if(province_num == r1_p[j].PROVINCE_ID) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province ID you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_VIII(); // call the function
                                break;
                            }
                        }
                        fclose(fp_READ3); // closing the file
                        printf("\n");
                        fflush(stdin); // avoid  jumping to another
                        printf("\t\t\t\t\t    Enter province name to add: ");
                        scanf("%s",&province_name); // enter province name
                        fp_READ4 = fopen("REGION8_PROVINCES.txt","r"); // opening file
                        while(fscanf(fp_READ4,"%d %s", &r1_p[i].PROVINCE_ID, &r1_p[i].PROVINCE_NAME) != EOF) { // scanning to the file
                            i++;
                        }
                        for(j = 0; j < i; j++) {
                            if(strcmp(province_name,r1_p[j].PROVINCE_NAME) == 0) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province NAME you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_VIII(); // call the function
                                break;
                            }
                        }
                        fprintf(fp_ADD,"%d %s\n",province_num,province_name); // printing to the file
                        fclose(fp_ADD); // closing file
                        fclose(fp_READ4); // closing file fo adding provinces
                        printf("\n");
                        fflush(stdin); // avoid input jumping in to another
                        printf("\t\t\t\t\t    Add another province? or Back?[Y/N/B]: ");
                        scanf("%c",&ch1);
                        if(ch1 == 'Y' || ch1 == 'y') {
                            system("cls"); // used to clear the previous screen
                            REGION_VIII(); // call again the function if condition is true
                        }else if(ch1 == 'B' || ch1 == 'b') {
                            system("cls"); // used to clear the previous screen
                            REGION_VIII(); // call again the function if condition is true
                        }else {
                            system("cls"); // used to clear the previous screen
                            MENU(); // call main function if condition is false
                        }
                    }
                break;
            case 2: // CASE FOR DELETE PROVINCE
                    fp_LIST_AVAILABLE = fopen("REGION8_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE  == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]DELETE PROVINCE        \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to delete[!]::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // list of all province that available to delete
                             printf("\t\t\t\t\t    [%d] %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      -----------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to delete: ");
                        scanf("%d",&n);
                        fp_DELETE = fopen("REGION8_PROVINCES.txt","r");
                        printf("\n");
                        while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                            if(n == r1_p[d].PROVINCE_ID) {
                               foundID = 1;
                            }
                            d++;
                        }
                        fclose(fp_DELETE);
                        if(foundID == 1) {
                            fp_DELETE = fopen("REGION8_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION8_TEMP.txt","w");
                            foundID = 0;
                           while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[d].PROVINCE_ID) == 0 ) {
                                   fprintf(fp_TEMP,"%d %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                                }
                                d++;
                            }
                            fclose(fp_DELETE);
                            fclose(fp_TEMP);
                            remove("REGION8_PROVINCES.txt");
                            rename("REGION8_TEMP.txt","REGION8_PROVINCES.txt");
                            printf("\n");
                            system("cls");
                            system("color 0C");
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Deleting please wait");
                            for(c = 0; c < 3; c++) {
                                printf(".");
                                Sleep(600);
                            }
                            system("cls");
                        }else {
                            fflush(stdin);
                            printf("\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_VIII();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t    Delete another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_VIII();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_VIII();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            case 3: // CASE FOR EDIT
                    fp_LIST_AVAILABLE = fopen("REGION8_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]EDIT PROVINCE          \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to edit::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) {
                            printf("\t\t\t\t\t    [%d]   %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      ---------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to edit: ");
                        scanf("%d",&n);
                        fp_EDIT = fopen("REGION8_PROVINCES.txt","r");
                        while(fscanf(fp_EDIT,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if(n == r1_p[d].PROVINCE_ID) {
                                   foundID = 1;
                                }
                            d++;
                        }
                        fclose(fp_EDIT);
                        if(foundID == 1) {
                            fp_EDIT = fopen("REGION8_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION8_TEMP.txt","w");
                            foundID = 0;
                            while(fscanf(fp_EDIT,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[e].PROVINCE_ID) == 1 ) {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       You choose [%s] to edit.\n\n",r1_p[e].PROVINCE_NAME);
                                    printf("\t\t\t\t\t       Edit province your selected: ");
                                    scanf("%s",&r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Editing please wait");
                                    for(j = 0; j < 3; j++) {
                                        printf(".");
                                        Sleep(600);
                                    }
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                }else {
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                }
                                e++;
                            }
                            fclose(fp_EDIT);
                            fclose(fp_TEMP);
                            remove("REGION8_PROVINCES.txt");
                            rename("REGION8_TEMP.txt","REGION8_PROVINCES.txt");
                        }else {
                            fflush(stdin);
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_VIII();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        system("cls");
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       Edit another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_VIII();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_VIII();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            default:
                system("cls"); // used to clear the previous screen
                system("color 0C");
                printf("\n\n\n\n\n\n\n\n\t\t\t   NOTE[!]: You input an invalid menu please choose correctly to avoid error.");
                getch();
                system("cls"); // used to clear the previous screen
                REGION_VIII(); // call function for validation
                break;
            } // closing brackets for switch(i)
       }else {
            system("cls"); // used to clear the previous screen
            MENU(); // call main function if condition is false
       } // closing bracket for if(ch1 == 'Y' || ch1 == 'y')
    } // fp_READ else closing bracket
}
void REGION_IX() {
    system("color 0A");
    char ch1,ch2,ch3,ch4,ch5,province_name[100];
    int i = 0, c, j, d = 0, e = 0, f = 0, province_num, n, foundID = 0;
    FILE *fp_ADD; // declaring a file pointer
    FILE *fp_DELETE; // declaring a file pointer
    FILE *fp_TEMP; // declaring a file pointer
    FILE *fp_RECOVER; // declaring a file pointer
    FILE *fp_EDIT; // declaring a file pointer
    FILE *fp_LIST_AVAILABLE;
    FILE *fp_READ1, *fp_READ2, *fp_READ3, *fp_READ4, *fp_TRANSFER; // declaring a file pointer
    fp_READ1 = fopen("REGION9_PROVINCES.txt","r"); // opening a file for reading
    if(fp_READ1 == NULL) { // checking if the file is in the location
        printf("The file REGION9_PROVINCES.txt was not found!\n");
        exit(1);
    }else {
       printf("\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       printf("\t\t\t\t\t  \xb        REGION-(IX) PROVINCES        \xb\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       while(fscanf(fp_READ1,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // reading a file until the end of file
            i++;
       }
        for(c = 0; c < i; c++) {
            for(j = c + 1; j < i; j++) {
                if(r1_p[c].PROVINCE_ID > r1_p[j].PROVINCE_ID) {
                    swap = r1_p[c];
                    r1_p[c] = r1_p[j];
                    r1_p[j] = swap;
                }
            }
        }
        fp_TRANSFER = fopen("REGION9_PROVINCES.txt","w");
        for(c = 0; c < i; c++) {
            fprintf(fp_TRANSFER,"%d %s\n",r1_p[c].PROVINCE_ID,r1_p[c].PROVINCE_NAME);
        }
        fclose(fp_TRANSFER);
        fclose(fp_READ1);
        fp_READ2 = fopen("REGION9_PROVINCES.txt","r");
           while(fscanf(fp_READ2,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                printf("\n\t\t\t\t\t  [%d]     %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                d++;
           }
        fclose(fp_READ2);
        printf("\n\n");
        printf("\t\t\t\t\t  ---------------------------------------\n");
        fflush(stdin); // avoid jumping to another input
        printf("\t\t\t\t\t  Continue to ADD, DELETE, EDIT?[Y/N]: ");
        scanf("%c",&ch1);
       if(ch1 == 'Y' || ch1 == 'y') {
            system("cls"); // used to clear the previous screen
            printf("\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [1]ADD           \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [2]DELETE        \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [3]EDIT          \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\n");
            printf("\t\t\t\t\t      Choose [n] to operate: ");
            scanf("%d",&i);
            switch(i) { // switch cases for choosing a menu
            case 1: // CASE FOR ADD PROVINCE
                    fp_ADD = fopen("REGION9_PROVINCES.txt","a"); // opening a file for append
                    if(fp_ADD == NULL) { // checking if the file is in the location
                        printf("The file was not found!\n");
                        exit(1);
                    }else {
                        system("cls"); // used to clear the previous screen
                        printf("\n\t\tUsed underscore '_' or any character when you add a province name with a spaces to avoid (error)!");
                        printf("\n\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb              [1]ADD               \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    Enter province unique number to add: ");
                        scanf("%d",&province_num); // enter province id
                        fp_READ3 = fopen("REGION9_PROVINCES.txt","r"); // opening file for reading
                        while(fscanf(fp_READ3,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) { // scanning to the file
                            e++;
                        }
                        for(j = 0; j < e; j++) {
                            if(province_num == r1_p[j].PROVINCE_ID) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province ID you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_IX(); // call the function
                                break;
                            }
                        }
                        fclose(fp_READ3); // closing the file
                        printf("\n");
                        fflush(stdin); // avoid  jumping to another
                        printf("\t\t\t\t\t    Enter province name to add: ");
                        scanf("%s",&province_name); // enter province name
                        fp_READ4 = fopen("REGION9_PROVINCES.txt","r"); // opening file
                        while(fscanf(fp_READ4,"%d %s", &r1_p[i].PROVINCE_ID, &r1_p[i].PROVINCE_NAME) != EOF) { // scanning to the file
                            i++;
                        }
                        for(j = 0; j < i; j++) {
                            if(strcmp(province_name,r1_p[j].PROVINCE_NAME) == 0) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province NAME you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_IX(); // call the function
                                break;
                            }
                        }
                        fprintf(fp_ADD,"%d %s\n",province_num,province_name); // printing to the file
                        fclose(fp_ADD); // closing file
                        fclose(fp_READ4); // closing file fo adding provinces
                        printf("\n");
                        fflush(stdin); // avoid input jumping in to another
                        printf("\t\t\t\t\t    Add another province? or Back?[Y/N/B]: ");
                        scanf("%c",&ch1);
                        if(ch1 == 'Y' || ch1 == 'y') {
                            system("cls"); // used to clear the previous screen
                            REGION_IX(); // call again the function if condition is true
                        }else if(ch1 == 'B' || ch1 == 'b') {
                            system("cls"); // used to clear the previous screen
                            REGION_IX(); // call again the function if condition is true
                        }else {
                            system("cls"); // used to clear the previous screen
                            MENU(); // call main function if condition is false
                        }
                    }
                break;
            case 2: // CASE FOR DELETE PROVINCE
                    fp_LIST_AVAILABLE = fopen("REGION9_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE  == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]DELETE PROVINCE        \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to delete[!]::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // list of all province that available to delete
                             printf("\t\t\t\t\t    [%d] %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      -----------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to delete: ");
                        scanf("%d",&n);
                        fp_DELETE = fopen("REGION9_PROVINCES.txt","r");
                        printf("\n");
                        while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                            if(n == r1_p[d].PROVINCE_ID) {
                               foundID = 1;
                            }
                            d++;
                        }
                        fclose(fp_DELETE);
                        if(foundID == 1) {
                            fp_DELETE = fopen("REGION9_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION9_TEMP.txt","w");
                            foundID = 0;
                           while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[d].PROVINCE_ID) == 0 ) {
                                   fprintf(fp_TEMP,"%d %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                                }
                                d++;
                            }
                            fclose(fp_DELETE);
                            fclose(fp_TEMP);
                            remove("REGION9_PROVINCES.txt");
                            rename("REGION9_TEMP.txt","REGION9_PROVINCES.txt");
                            printf("\n");
                            system("cls");
                            system("color 0C");
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Deleting please wait");
                            for(c = 0; c < 3; c++) {
                                printf(".");
                                Sleep(600);
                            }
                            system("cls");
                        }else {
                            fflush(stdin);
                            printf("\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_IX();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t    Delete another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_IX();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_IX();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            case 3: // CASE FOR EDIT
                    fp_LIST_AVAILABLE = fopen("REGION9_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]EDIT PROVINCE          \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to edit::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) {
                            printf("\t\t\t\t\t    [%d]   %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      ---------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to edit: ");
                        scanf("%d",&n);
                        fp_EDIT = fopen("REGION9_PROVINCES.txt","r");
                        while(fscanf(fp_EDIT,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if(n == r1_p[d].PROVINCE_ID) {
                                   foundID = 1;
                                }
                            d++;
                        }
                        fclose(fp_EDIT);
                        if(foundID == 1) {
                            fp_EDIT = fopen("REGION9_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION9_TEMP.txt","w");
                            foundID = 0;
                            while(fscanf(fp_EDIT,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[e].PROVINCE_ID) == 1 ) {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       You choose [%s] to edit.\n\n",r1_p[e].PROVINCE_NAME);
                                    printf("\t\t\t\t\t       Edit province your selected: ");
                                    scanf("%s",&r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Editing please wait");
                                    for(j = 0; j < 3; j++) {
                                        printf(".");
                                        Sleep(600);
                                    }
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                }else {
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                }
                                e++;
                            }
                            fclose(fp_EDIT);
                            fclose(fp_TEMP);
                            remove("REGION9_PROVINCES.txt");
                            rename("REGION9_TEMP.txt","REGION9_PROVINCES.txt");
                        }else {
                            fflush(stdin);
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_IX();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        system("cls");
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       Edit another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_IX();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_IX();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            default:
                system("cls"); // used to clear the previous screen
                system("color 0C");
                printf("\n\n\n\n\n\n\n\n\t\t\t   NOTE[!]: You input an invalid menu please choose correctly to avoid error.");
                getch();
                system("cls"); // used to clear the previous screen
                REGION_IX(); // call function for validation
                break;
            } // closing brackets for switch(i)
       }else {
            system("cls"); // used to clear the previous screen
            MENU(); // call main function if condition is false
       } // closing bracket for if(ch1 == 'Y' || ch1 == 'y')
    } // fp_READ else closing bracket
}
void REGION_X() {
     system("color 0A");
    char ch1,ch2,ch3,ch4,ch5,province_name[100];
    int i = 0, c, j, d = 0, e = 0, f = 0, province_num, n, foundID = 0;
    FILE *fp_ADD; // declaring a file pointer
    FILE *fp_DELETE; // declaring a file pointer
    FILE *fp_TEMP; // declaring a file pointer
    FILE *fp_RECOVER; // declaring a file pointer
    FILE *fp_EDIT; // declaring a file pointer
    FILE *fp_LIST_AVAILABLE;
    FILE *fp_READ1, *fp_READ2, *fp_READ3, *fp_READ4, *fp_TRANSFER; // declaring a file pointer
    fp_READ1 = fopen("REGION10_PROVINCES.txt","r"); // opening a file for reading
    if(fp_READ1 == NULL) { // checking if the file is in the location
        printf("The file REGION10_PROVINCES.txt was not found!\n");
        exit(1);
    }else {
       printf("\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       printf("\t\t\t\t\t  \xb        REGION-(X) PROVINCES         \xb\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       while(fscanf(fp_READ1,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // reading a file until the end of file
            i++;
       }
        for(c = 0; c < i; c++) {
            for(j = c + 1; j < i; j++) {
                if(r1_p[c].PROVINCE_ID > r1_p[j].PROVINCE_ID) {
                    swap = r1_p[c];
                    r1_p[c] = r1_p[j];
                    r1_p[j] = swap;
                }
            }
        }
        fp_TRANSFER = fopen("REGION10_PROVINCES.txt","w");
        for(c = 0; c < i; c++) {
            fprintf(fp_TRANSFER,"%d %s\n",r1_p[c].PROVINCE_ID,r1_p[c].PROVINCE_NAME);
        }
        fclose(fp_TRANSFER);
        fclose(fp_READ1);
        fp_READ2 = fopen("REGION10_PROVINCES.txt","r");
           while(fscanf(fp_READ2,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                printf("\n\t\t\t\t\t  [%d]     %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                d++;
           }
        fclose(fp_READ2);
        printf("\n\n");
        printf("\t\t\t\t\t  ---------------------------------------\n");
        fflush(stdin); // avoid jumping to another input
        printf("\t\t\t\t\t  Continue to ADD, DELETE, EDIT?[Y/N]: ");
        scanf("%c",&ch1);
       if(ch1 == 'Y' || ch1 == 'y') {
            system("cls"); // used to clear the previous screen
            printf("\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [1]ADD           \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [2]DELETE        \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [3]EDIT          \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\n");
            printf("\t\t\t\t\t      Choose [n] to operate: ");
            scanf("%d",&i);
            switch(i) { // switch cases for choosing a menu
            case 1: // CASE FOR ADD PROVINCE
                    fp_ADD = fopen("REGION10_PROVINCES.txt","a"); // opening a file for append
                    if(fp_ADD == NULL) { // checking if the file is in the location
                        printf("The file was not found!\n");
                        exit(1);
                    }else {
                        system("cls"); // used to clear the previous screen
                        printf("\n\t\tUsed underscore '_' or any character when you add a province name with a spaces to avoid (error)!");
                        printf("\n\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb              [1]ADD               \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    Enter province unique number to add: ");
                        scanf("%d",&province_num); // enter province id
                        fp_READ3 = fopen("REGION10_PROVINCES.txt","r"); // opening file for reading
                        while(fscanf(fp_READ3,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) { // scanning to the file
                            e++;
                        }
                        for(j = 0; j < e; j++) {
                            if(province_num == r1_p[j].PROVINCE_ID) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province ID you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_X(); // call the function
                                break;
                            }
                        }
                        fclose(fp_READ3); // closing the file
                        printf("\n");
                        fflush(stdin); // avoid  jumping to another
                        printf("\t\t\t\t\t    Enter province name to add: ");
                        scanf("%s",&province_name); // enter province name
                        fp_READ4 = fopen("REGION10_PROVINCES.txt","r"); // opening file
                        while(fscanf(fp_READ4,"%d %s", &r1_p[i].PROVINCE_ID, &r1_p[i].PROVINCE_NAME) != EOF) { // scanning to the file
                            i++;
                        }
                        for(j = 0; j < i; j++) {
                            if(strcmp(province_name,r1_p[j].PROVINCE_NAME) == 0) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province NAME you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_I(); // call the function
                                break;
                            }
                        }
                        fprintf(fp_ADD,"%d %s\n",province_num,province_name); // printing to the file
                        fclose(fp_ADD); // closing file
                        fclose(fp_READ4); // closing file fo adding provinces
                        printf("\n");
                        fflush(stdin); // avoid input jumping in to another
                        printf("\t\t\t\t\t    Add another province? or Back?[Y/N/B]: ");
                        scanf("%c",&ch1);
                        if(ch1 == 'Y' || ch1 == 'y') {
                            system("cls"); // used to clear the previous screen
                            REGION_X(); // call again the function if condition is true
                        }else if(ch1 == 'B' || ch1 == 'b') {
                            system("cls"); // used to clear the previous screen
                            REGION_X(); // call again the function if condition is true
                        }else {
                            system("cls"); // used to clear the previous screen
                            MENU(); // call main function if condition is false
                        }
                    }
                break;
            case 2: // CASE FOR DELETE PROVINCE
                    fp_LIST_AVAILABLE = fopen("REGION10_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE  == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]DELETE PROVINCE        \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to delete[!]::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // list of all province that available to delete
                             printf("\t\t\t\t\t    [%d] %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      -----------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to delete: ");
                        scanf("%d",&n);
                        fp_DELETE = fopen("REGION10_PROVINCES.txt","r");
                        printf("\n");
                        while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                            if(n == r1_p[d].PROVINCE_ID) {
                               foundID = 1;
                            }
                            d++;
                        }
                        fclose(fp_DELETE);
                        if(foundID == 1) {
                            fp_DELETE = fopen("REGION10_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION10_TEMP.txt","w");
                            foundID = 0;
                           while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[d].PROVINCE_ID) == 0 ) {
                                   fprintf(fp_TEMP,"%d %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                                }
                                d++;
                            }
                            fclose(fp_DELETE);
                            fclose(fp_TEMP);
                            remove("REGION10_PROVINCES.txt");
                            rename("REGION10_TEMP.txt","REGION10_PROVINCES.txt");
                            printf("\n");
                            system("cls");
                            system("color 0C");
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Deleting please wait");
                            for(c = 0; c < 3; c++) {
                                printf(".");
                                Sleep(600);
                            }
                            system("cls");
                        }else {
                            fflush(stdin);
                            printf("\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_X();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t    Delete another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_X();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_X();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            case 3: // CASE FOR EDIT
                    fp_LIST_AVAILABLE = fopen("REGION10_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]EDIT PROVINCE          \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to edit::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) {
                            printf("\t\t\t\t\t    [%d]   %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      ---------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to edit: ");
                        scanf("%d",&n);
                        fp_EDIT = fopen("REGION10_PROVINCES.txt","r");
                        while(fscanf(fp_EDIT,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if(n == r1_p[d].PROVINCE_ID) {
                                   foundID = 1;
                                }
                            d++;
                        }
                        fclose(fp_EDIT);
                        if(foundID == 1) {
                            fp_EDIT = fopen("REGION10_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION10_TEMP.txt","w");
                            foundID = 0;
                            while(fscanf(fp_EDIT,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[e].PROVINCE_ID) == 1 ) {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       You choose [%s] to edit.\n\n",r1_p[e].PROVINCE_NAME);
                                    printf("\t\t\t\t\t       Edit province your selected: ");
                                    scanf("%s",&r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Editing please wait");
                                    for(j = 0; j < 3; j++) {
                                        printf(".");
                                        Sleep(600);
                                    }
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                }else {
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                }
                                e++;
                            }
                            fclose(fp_EDIT);
                            fclose(fp_TEMP);
                            remove("REGION10_PROVINCES.txt");
                            rename("REGION10_TEMP.txt","REGION10_PROVINCES.txt");
                        }else {
                            fflush(stdin);
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_X();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        system("cls");
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       Edit another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_X();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_X();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            default:
                system("cls"); // used to clear the previous screen
                system("color 0C");
                printf("\n\n\n\n\n\n\n\n\t\t\t   NOTE[!]: You input an invalid menu please choose correctly to avoid error.");
                getch();
                system("cls"); // used to clear the previous screen
                REGION_X(); // call function for validation
                break;
            } // closing brackets for switch(i)
       }else {
            system("cls"); // used to clear the previous screen
            MENU(); // call main function if condition is false
       } // closing bracket for if(ch1 == 'Y' || ch1 == 'y')
    } // fp_READ else closing bracket
}
void REGION_XI() {
     system("color 0A");
    char ch1,ch2,ch3,ch4,ch5,province_name[100];
    int i = 0, c, j, d = 0, e = 0, f = 0, province_num, n, foundID = 0;
    FILE *fp_ADD; // declaring a file pointer
    FILE *fp_DELETE; // declaring a file pointer
    FILE *fp_TEMP; // declaring a file pointer
    FILE *fp_RECOVER; // declaring a file pointer
    FILE *fp_EDIT; // declaring a file pointer
    FILE *fp_LIST_AVAILABLE;
    FILE *fp_READ1, *fp_READ2, *fp_READ3, *fp_READ4, *fp_TRANSFER; // declaring a file pointer
    fp_READ1 = fopen("REGION11_PROVINCES.txt","r"); // opening a file for reading
    if(fp_READ1 == NULL) { // checking if the file is in the location
        printf("The file REGION11_PROVINCES.txt was not found!\n");
        exit(1);
    }else {
       printf("\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       printf("\t\t\t\t\t  \xb        REGION-(XI) PROVINCES        \xb\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       while(fscanf(fp_READ1,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // reading a file until the end of file
            i++;
       }
        for(c = 0; c < i; c++) {
            for(j = c + 1; j < i; j++) {
                if(r1_p[c].PROVINCE_ID > r1_p[j].PROVINCE_ID) {
                    swap = r1_p[c];
                    r1_p[c] = r1_p[j];
                    r1_p[j] = swap;
                }
            }
        }
        fp_TRANSFER = fopen("REGION11_PROVINCES.txt","w");
        for(c = 0; c < i; c++) {
            fprintf(fp_TRANSFER,"%d %s\n",r1_p[c].PROVINCE_ID,r1_p[c].PROVINCE_NAME);
        }
        fclose(fp_TRANSFER);
        fclose(fp_READ1);
        fp_READ2 = fopen("REGION11_PROVINCES.txt","r");
           while(fscanf(fp_READ2,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                printf("\n\t\t\t\t\t  [%d]     %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                d++;
           }
        fclose(fp_READ2);
        printf("\n\n");
        printf("\t\t\t\t\t  ---------------------------------------\n");
        fflush(stdin); // avoid jumping to another input
        printf("\t\t\t\t\t  Continue to ADD, DELETE, EDIT?[Y/N]: ");
        scanf("%c",&ch1);
       if(ch1 == 'Y' || ch1 == 'y') {
            system("cls"); // used to clear the previous screen
            printf("\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [1]ADD           \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [2]DELETE        \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [3]EDIT          \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\n");
            printf("\t\t\t\t\t      Choose [n] to operate: ");
            scanf("%d",&i);
            switch(i) { // switch cases for choosing a menu
            case 1: // CASE FOR ADD PROVINCE
                    fp_ADD = fopen("REGION11_PROVINCES.txt","a"); // opening a file for append
                    if(fp_ADD == NULL) { // checking if the file is in the location
                        printf("The file was not found!\n");
                        exit(1);
                    }else {
                        system("cls"); // used to clear the previous screen
                        printf("\n\t\tUsed underscore '_' or any character when you add a province name with a spaces to avoid (error)!");
                        printf("\n\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb              [1]ADD               \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    Enter province unique number to add: ");
                        scanf("%d",&province_num); // enter province id
                        fp_READ3 = fopen("REGION11_PROVINCES.txt","r"); // opening file for reading
                        while(fscanf(fp_READ3,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) { // scanning to the file
                            e++;
                        }
                        for(j = 0; j < e; j++) {
                            if(province_num == r1_p[j].PROVINCE_ID) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province ID you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_XI(); // call the function
                                break;
                            }
                        }
                        fclose(fp_READ3); // closing the file
                        printf("\n");
                        fflush(stdin); // avoid  jumping to another
                        printf("\t\t\t\t\t    Enter province name to add: ");
                        scanf("%s",&province_name); // enter province name
                        fp_READ4 = fopen("REGION11_PROVINCES.txt","r"); // opening file
                        while(fscanf(fp_READ4,"%d %s", &r1_p[i].PROVINCE_ID, &r1_p[i].PROVINCE_NAME) != EOF) { // scanning to the file
                            i++;
                        }
                        for(j = 0; j < i; j++) {
                            if(strcmp(province_name,r1_p[j].PROVINCE_NAME) == 0) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province NAME you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_XI(); // call the function
                                break;
                            }
                        }
                        fprintf(fp_ADD,"%d %s\n",province_num,province_name); // printing to the file
                        fclose(fp_ADD); // closing file
                        fclose(fp_READ4); // closing file fo adding provinces
                        printf("\n");
                        fflush(stdin); // avoid input jumping in to another
                        printf("\t\t\t\t\t    Add another province? or Back?[Y/N/B]: ");
                        scanf("%c",&ch1);
                        if(ch1 == 'Y' || ch1 == 'y') {
                            system("cls"); // used to clear the previous screen
                            REGION_XI(); // call again the function if condition is true
                        }else if(ch1 == 'B' || ch1 == 'b') {
                            system("cls"); // used to clear the previous screen
                            REGION_XI(); // call again the function if condition is true
                        }else {
                            system("cls"); // used to clear the previous screen
                            MENU(); // call main function if condition is false
                        }
                    }
                break;
            case 2: // CASE FOR DELETE PROVINCE
                    fp_LIST_AVAILABLE = fopen("REGION11_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE  == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]DELETE PROVINCE        \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to delete[!]::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // list of all province that available to delete
                             printf("\t\t\t\t\t    [%d] %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      -----------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to delete: ");
                        scanf("%d",&n);
                        fp_DELETE = fopen("REGION11_PROVINCES.txt","r");
                        printf("\n");
                        while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                            if(n == r1_p[d].PROVINCE_ID) {
                               foundID = 1;
                            }
                            d++;
                        }
                        fclose(fp_DELETE);
                        if(foundID == 1) {
                            fp_DELETE = fopen("REGION11_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION11_TEMP.txt","w");
                            foundID = 0;
                           while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[d].PROVINCE_ID) == 0 ) {
                                   fprintf(fp_TEMP,"%d %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                                }
                                d++;
                            }
                            fclose(fp_DELETE);
                            fclose(fp_TEMP);
                            remove("REGION11_PROVINCES.txt");
                            rename("REGION11_TEMP.txt","REGION11_PROVINCES.txt");
                            printf("\n");
                            system("cls");
                            system("color 0C");
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Deleting please wait");
                            for(c = 0; c < 3; c++) {
                                printf(".");
                                Sleep(600);
                            }
                            system("cls");
                        }else {
                            fflush(stdin);
                            printf("\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_XI();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t    Delete another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_XI();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_XI();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            case 3: // CASE FOR EDIT
                    fp_LIST_AVAILABLE = fopen("REGION11_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]EDIT PROVINCE          \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to edit::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) {
                            printf("\t\t\t\t\t    [%d]   %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      ---------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to edit: ");
                        scanf("%d",&n);
                        fp_EDIT = fopen("REGION11_PROVINCES.txt","r");
                        while(fscanf(fp_EDIT,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if(n == r1_p[d].PROVINCE_ID) {
                                   foundID = 1;
                                }
                            d++;
                        }
                        fclose(fp_EDIT);
                        if(foundID == 1) {
                            fp_EDIT = fopen("REGION11_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION11_TEMP.txt","w");
                            foundID = 0;
                            while(fscanf(fp_EDIT,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[e].PROVINCE_ID) == 1 ) {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       You choose [%s] to edit.\n\n",r1_p[e].PROVINCE_NAME);
                                    printf("\t\t\t\t\t       Edit province your selected: ");
                                    scanf("%s",&r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Editing please wait");
                                    for(j = 0; j < 3; j++) {
                                        printf(".");
                                        Sleep(600);
                                    }
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                }else {
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                }
                                e++;
                            }
                            fclose(fp_EDIT);
                            fclose(fp_TEMP);
                            remove("REGION11_PROVINCES.txt");
                            rename("REGION11_TEMP.txt","REGION11_PROVINCES.txt");
                        }else {
                            fflush(stdin);
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_XI();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        system("cls");
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       Edit another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_XI();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_XI();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            default:
                system("cls"); // used to clear the previous screen
                system("color 0C");
                printf("\n\n\n\n\n\n\n\n\t\t\t   NOTE[!]: You input an invalid menu please choose correctly to avoid error.");
                getch();
                system("cls"); // used to clear the previous screen
                REGION_XI(); // call function for validation
                break;
            } // closing brackets for switch(i)
       }else {
            system("cls"); // used to clear the previous screen
            MENU(); // call main function if condition is false
       } // closing bracket for if(ch1 == 'Y' || ch1 == 'y')
    } // fp_READ else closing bracket
}
void REGION_XII() {
     system("color 0A");
    char ch1,ch2,ch3,ch4,ch5,province_name[100];
    int i = 0, c, j, d = 0, e = 0, f = 0, province_num, n, foundID = 0;
    FILE *fp_ADD; // declaring a file pointer
    FILE *fp_DELETE; // declaring a file pointer
    FILE *fp_TEMP; // declaring a file pointer
    FILE *fp_RECOVER; // declaring a file pointer
    FILE *fp_EDIT; // declaring a file pointer
    FILE *fp_LIST_AVAILABLE;
    FILE *fp_READ1, *fp_READ2, *fp_READ3, *fp_READ4, *fp_TRANSFER; // declaring a file pointer
    fp_READ1 = fopen("REGION12_PROVINCES.txt","r"); // opening a file for reading
    if(fp_READ1 == NULL) { // checking if the file is in the location
        printf("The file REGION12_PROVINCES.txt was not found!\n");
        exit(1);
    }else {
       printf("\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       printf("\t\t\t\t\t  \xb        REGION-(XII) PROVINCES       \xb\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       while(fscanf(fp_READ1,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // reading a file until the end of file
            i++;
       }
        for(c = 0; c < i; c++) {
            for(j = c + 1; j < i; j++) {
                if(r1_p[c].PROVINCE_ID > r1_p[j].PROVINCE_ID) {
                    swap = r1_p[c];
                    r1_p[c] = r1_p[j];
                    r1_p[j] = swap;
                }
            }
        }
        fp_TRANSFER = fopen("REGION12_PROVINCES.txt","w");
        for(c = 0; c < i; c++) {
            fprintf(fp_TRANSFER,"%d %s\n",r1_p[c].PROVINCE_ID,r1_p[c].PROVINCE_NAME);
        }
        fclose(fp_TRANSFER);
        fclose(fp_READ1);
        fp_READ2 = fopen("REGION12_PROVINCES.txt","r");
           while(fscanf(fp_READ2,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                printf("\n\t\t\t\t\t  [%d]     %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                d++;
           }
        fclose(fp_READ2);
        printf("\n\n");
        printf("\t\t\t\t\t  ---------------------------------------\n");
        fflush(stdin); // avoid jumping to another input
        printf("\t\t\t\t\t  Continue to ADD, DELETE, EDIT?[Y/N]: ");
        scanf("%c",&ch1);
       if(ch1 == 'Y' || ch1 == 'y') {
            system("cls"); // used to clear the previous screen
            printf("\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [1]ADD           \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [2]DELETE        \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [3]EDIT          \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\n");
            printf("\t\t\t\t\t      Choose [n] to operate: ");
            scanf("%d",&i);
            switch(i) { // switch cases for choosing a menu
            case 1: // CASE FOR ADD PROVINCE
                    fp_ADD = fopen("REGION12_PROVINCES.txt","a"); // opening a file for append
                    if(fp_ADD == NULL) { // checking if the file is in the location
                        printf("The file was not found!\n");
                        exit(1);
                    }else {
                        system("cls"); // used to clear the previous screen
                        printf("\n\t\tUsed underscore '_' or any character when you add a province name with a spaces to avoid (error)!");
                        printf("\n\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb              [1]ADD               \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    Enter province unique number to add: ");
                        scanf("%d",&province_num); // enter province id
                        fp_READ3 = fopen("REGION12_PROVINCES.txt","r"); // opening file for reading
                        while(fscanf(fp_READ3,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) { // scanning to the file
                            e++;
                        }
                        for(j = 0; j < e; j++) {
                            if(province_num == r1_p[j].PROVINCE_ID) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province ID you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_XII(); // call the function
                                break;
                            }
                        }
                        fclose(fp_READ3); // closing the file
                        printf("\n");
                        fflush(stdin); // avoid  jumping to another
                        printf("\t\t\t\t\t    Enter province name to add: ");
                        scanf("%s",&province_name); // enter province name
                        fp_READ4 = fopen("REGION12_PROVINCES.txt","r"); // opening file
                        while(fscanf(fp_READ4,"%d %s", &r1_p[i].PROVINCE_ID, &r1_p[i].PROVINCE_NAME) != EOF) { // scanning to the file
                            i++;
                        }
                        for(j = 0; j < i; j++) {
                            if(strcmp(province_name,r1_p[j].PROVINCE_NAME) == 0) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province NAME you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_XII(); // call the function
                                break;
                            }
                        }
                        fprintf(fp_ADD,"%d %s\n",province_num,province_name); // printing to the file
                        fclose(fp_ADD); // closing file
                        fclose(fp_READ4); // closing file fo adding provinces
                        printf("\n");
                        fflush(stdin); // avoid input jumping in to another
                        printf("\t\t\t\t\t    Add another province? or Back?[Y/N/B]: ");
                        scanf("%c",&ch1);
                        if(ch1 == 'Y' || ch1 == 'y') {
                            system("cls"); // used to clear the previous screen
                            REGION_XII(); // call again the function if condition is true
                        }else if(ch1 == 'B' || ch1 == 'b') {
                            system("cls"); // used to clear the previous screen
                            REGION_XII(); // call again the function if condition is true
                        }else {
                            system("cls"); // used to clear the previous screen
                            MENU(); // call main function if condition is false
                        }
                    }
                break;
            case 2: // CASE FOR DELETE PROVINCE
                    fp_LIST_AVAILABLE = fopen("REGION12_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE  == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]DELETE PROVINCE        \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to delete[!]::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // list of all province that available to delete
                             printf("\t\t\t\t\t    [%d] %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      -----------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to delete: ");
                        scanf("%d",&n);
                        fp_DELETE = fopen("REGION12_PROVINCES.txt","r");
                        printf("\n");
                        while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                            if(n == r1_p[d].PROVINCE_ID) {
                               foundID = 1;
                            }
                            d++;
                        }
                        fclose(fp_DELETE);
                        if(foundID == 1) {
                            fp_DELETE = fopen("REGION12_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION12_TEMP.txt","w");
                            foundID = 0;
                           while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[d].PROVINCE_ID) == 0 ) {
                                   fprintf(fp_TEMP,"%d %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                                }
                                d++;
                            }
                            fclose(fp_DELETE);
                            fclose(fp_TEMP);
                            remove("REGION12_PROVINCES.txt");
                            rename("REGION12_TEMP.txt","REGION12_PROVINCES.txt");
                            printf("\n");
                            system("cls");
                            system("color 0C");
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Deleting please wait");
                            for(c = 0; c < 3; c++) {
                                printf(".");
                                Sleep(600);
                            }
                            system("cls");
                        }else {
                            fflush(stdin);
                            printf("\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_XII();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t    Delete another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_XII();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_XII();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            case 3: // CASE FOR EDIT
                    fp_LIST_AVAILABLE = fopen("REGION12_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]EDIT PROVINCE          \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to edit::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) {
                            printf("\t\t\t\t\t    [%d]   %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      ---------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to edit: ");
                        scanf("%d",&n);
                        fp_EDIT = fopen("REGION12_PROVINCES.txt","r");
                        while(fscanf(fp_EDIT,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if(n == r1_p[d].PROVINCE_ID) {
                                   foundID = 1;
                                }
                            d++;
                        }
                        fclose(fp_EDIT);
                        if(foundID == 1) {
                            fp_EDIT = fopen("REGION12_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION12_TEMP.txt","w");
                            foundID = 0;
                            while(fscanf(fp_EDIT,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[e].PROVINCE_ID) == 1 ) {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       You choose [%s] to edit.\n\n",r1_p[e].PROVINCE_NAME);
                                    printf("\t\t\t\t\t       Edit province your selected: ");
                                    scanf("%s",&r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Editing please wait");
                                    for(j = 0; j < 3; j++) {
                                        printf(".");
                                        Sleep(600);
                                    }
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                }else {
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                }
                                e++;
                            }
                            fclose(fp_EDIT);
                            fclose(fp_TEMP);
                            remove("REGION12_PROVINCES.txt");
                            rename("REGION12_TEMP.txt","REGION12_PROVINCES.txt");
                        }else {
                            fflush(stdin);
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_XII();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        system("cls");
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       Edit another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_XII();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_XII();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            default:
                system("cls"); // used to clear the previous screen
                system("color 0C");
                printf("\n\n\n\n\n\n\n\n\t\t\t   NOTE[!]: You input an invalid menu please choose correctly to avoid error.");
                getch();
                system("cls"); // used to clear the previous screen
                REGION_XII(); // call function for validation
                break;
            } // closing brackets for switch(i)
       }else {
            system("cls"); // used to clear the previous screen
            MENU(); // call main function if condition is false
       } // closing bracket for if(ch1 == 'Y' || ch1 == 'y')
    } // fp_READ else closing bracket
}
void REGION_XIII() {
    system("color 0A");
    char ch1,ch2,ch3,ch4,ch5,province_name[100];
    int i = 0, c, j, d = 0, e = 0, f = 0, province_num, n, foundID = 0;
    FILE *fp_ADD; // declaring a file pointer
    FILE *fp_DELETE; // declaring a file pointer
    FILE *fp_TEMP; // declaring a file pointer
    FILE *fp_RECOVER; // declaring a file pointer
    FILE *fp_EDIT; // declaring a file pointer
    FILE *fp_LIST_AVAILABLE;
    FILE *fp_READ1, *fp_READ2, *fp_READ3, *fp_READ4, *fp_TRANSFER; // declaring a file pointer
    fp_READ1 = fopen("REGION13_PROVINCES.txt","r"); // opening a file for reading
    if(fp_READ1 == NULL) { // checking if the file is in the location
        printf("The file REGION13_PROVINCES.txt was not found!\n");
        exit(1);
    }else {
       printf("\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       printf("\t\t\t\t\t  \xb        REGION-(XIII) PROVINCES      \xb\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       while(fscanf(fp_READ1,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // reading a file until the end of file
            i++;
       }
        for(c = 0; c < i; c++) {
            for(j = c + 1; j < i; j++) {
                if(r1_p[c].PROVINCE_ID > r1_p[j].PROVINCE_ID) {
                    swap = r1_p[c];
                    r1_p[c] = r1_p[j];
                    r1_p[j] = swap;
                }
            }
        }
        fp_TRANSFER = fopen("REGION13_PROVINCES.txt","w");
        for(c = 0; c < i; c++) {
            fprintf(fp_TRANSFER,"%d %s\n",r1_p[c].PROVINCE_ID,r1_p[c].PROVINCE_NAME);
        }
        fclose(fp_TRANSFER);
        fclose(fp_READ1);
        fp_READ2 = fopen("REGION13_PROVINCES.txt","r");
           while(fscanf(fp_READ2,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                printf("\n\t\t\t\t\t  [%d]     %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                d++;
           }
        fclose(fp_READ2);
        printf("\n\n");
        printf("\t\t\t\t\t  ---------------------------------------\n");
        fflush(stdin); // avoid jumping to another input
        printf("\t\t\t\t\t  Continue to ADD, DELETE, EDIT?[Y/N]: ");
        scanf("%c",&ch1);
       if(ch1 == 'Y' || ch1 == 'y') {
            system("cls"); // used to clear the previous screen
            printf("\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [1]ADD           \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [2]DELETE        \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [3]EDIT          \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\n");
            printf("\t\t\t\t\t      Choose [n] to operate: ");
            scanf("%d",&i);
            switch(i) { // switch cases for choosing a menu
            case 1: // CASE FOR ADD PROVINCE
                    fp_ADD = fopen("REGION13_PROVINCES.txt","a"); // opening a file for append
                    if(fp_ADD == NULL) { // checking if the file is in the location
                        printf("The file was not found!\n");
                        exit(1);
                    }else {
                        system("cls"); // used to clear the previous screen
                        printf("\n\t\tUsed underscore '_' or any character when you add a province name with a spaces to avoid (error)!");
                        printf("\n\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb              [1]ADD               \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    Enter province unique number to add: ");
                        scanf("%d",&province_num); // enter province id
                        fp_READ3 = fopen("REGION13_PROVINCES.txt","r"); // opening file for reading
                        while(fscanf(fp_READ3,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) { // scanning to the file
                            e++;
                        }
                        for(j = 0; j < e; j++) {
                            if(province_num == r1_p[j].PROVINCE_ID) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province ID you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_XIII(); // call the function
                                break;
                            }
                        }
                        fclose(fp_READ3); // closing the file
                        printf("\n");
                        fflush(stdin); // avoid  jumping to another
                        printf("\t\t\t\t\t    Enter province name to add: ");
                        scanf("%s",&province_name); // enter province name
                        fp_READ4 = fopen("REGION13_PROVINCES.txt","r"); // opening file
                        while(fscanf(fp_READ4,"%d %s", &r1_p[i].PROVINCE_ID, &r1_p[i].PROVINCE_NAME) != EOF) { // scanning to the file
                            i++;
                        }
                        for(j = 0; j < i; j++) {
                            if(strcmp(province_name,r1_p[j].PROVINCE_NAME) == 0) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province NAME you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                REGION_XIII(); // call the function
                                break;
                            }
                        }
                        fprintf(fp_ADD,"%d %s\n",province_num,province_name); // printing to the file
                        fclose(fp_ADD); // closing file
                        fclose(fp_READ4); // closing file fo adding provinces
                        printf("\n");
                        fflush(stdin); // avoid input jumping in to another
                        printf("\t\t\t\t\t    Add another province? or Back?[Y/N/B]: ");
                        scanf("%c",&ch1);
                        if(ch1 == 'Y' || ch1 == 'y') {
                            system("cls"); // used to clear the previous screen
                            REGION_XIII(); // call again the function if condition is true
                        }else if(ch1 == 'B' || ch1 == 'b') {
                            system("cls"); // used to clear the previous screen
                            REGION_XIII(); // call again the function if condition is true
                        }else {
                            system("cls"); // used to clear the previous screen
                            MENU(); // call main function if condition is false
                        }
                    }
                break;
            case 2: // CASE FOR DELETE PROVINCE
                    fp_LIST_AVAILABLE = fopen("REGION13_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE  == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]DELETE PROVINCE        \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to delete[!]::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // list of all province that available to delete
                             printf("\t\t\t\t\t    [%d] %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      -----------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to delete: ");
                        scanf("%d",&n);
                        fp_DELETE = fopen("REGION13_PROVINCES.txt","r");
                        printf("\n");
                        while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                            if(n == r1_p[d].PROVINCE_ID) {
                               foundID = 1;
                            }
                            d++;
                        }
                        fclose(fp_DELETE);
                        if(foundID == 1) {
                            fp_DELETE = fopen("REGION13_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION13_TEMP.txt","w");
                            foundID = 0;
                           while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[d].PROVINCE_ID) == 0 ) {
                                   fprintf(fp_TEMP,"%d %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                                }
                                d++;
                            }
                            fclose(fp_DELETE);
                            fclose(fp_TEMP);
                            remove("REGION13_PROVINCES.txt");
                            rename("REGION13_TEMP.txt","REGION13_PROVINCES.txt");
                            printf("\n");
                            system("cls");
                            system("color 0C");
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Deleting please wait");
                            for(c = 0; c < 3; c++) {
                                printf(".");
                                Sleep(600);
                            }
                            system("cls");
                        }else {
                            fflush(stdin);
                            printf("\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_XIII();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Delete another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_XIII();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_XIII();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            case 3: // CASE FOR EDIT
                    fp_LIST_AVAILABLE = fopen("REGION13_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]EDIT PROVINCE          \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to edit::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) {
                            printf("\t\t\t\t\t    [%d]   %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      ---------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to edit: ");
                        scanf("%d",&n);
                        fp_EDIT = fopen("REGION13_PROVINCES.txt","r");
                        while(fscanf(fp_EDIT,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if(n == r1_p[d].PROVINCE_ID) {
                                   foundID = 1;
                                }
                            d++;
                        }
                        fclose(fp_EDIT);
                        if(foundID == 1) {
                            fp_EDIT = fopen("REGION13_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION13_TEMP.txt","w");
                            foundID = 0;
                            while(fscanf(fp_EDIT,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[e].PROVINCE_ID) == 1 ) {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       You choose [%s] to edit.\n\n",r1_p[e].PROVINCE_NAME);
                                    printf("\t\t\t\t\t       Edit province your selected: ");
                                    scanf("%s",&r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Editing please wait");
                                    for(j = 0; j < 3; j++) {
                                        printf(".");
                                        Sleep(600);
                                    }
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                }else {
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                }
                                e++;
                            }
                            fclose(fp_EDIT);
                            fclose(fp_TEMP);
                            remove("REGION13_PROVINCES.txt");
                            rename("REGION13_TEMP.txt","REGION13_PROVINCES.txt");
                        }else {
                            fflush(stdin);
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                REGION_XIII();
                            }else {printf("\n\t\tUsed underscore '_' or any character when you add a province name with a spaces to avoid (error)!");
                        printf("\n\n");
                                system("cls");
                                MENU();
                            }
                        }
                        system("cls");
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       Edit another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            REGION_XIII();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            REGION_XIII();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            default:
                system("cls"); // used to clear the previous screen
                system("color 0C");
                printf("\n\n\n\n\n\n\n\n\t\t\t   NOTE[!]: You input an invalid menu please choose correctly to avoid error.");
                getch();
                system("cls"); // used to clear the previous screen
                REGION_XIII(); // call function for validation
                break;
            } // closing brackets for switch(i)
       }else {
            system("cls"); // used to clear the previous screen
            MENU(); // call main function if condition is false
       } // closing bracket for if(ch1 == 'Y' || ch1 == 'y')
    } // fp_READ else closing bracket
}
void ARMM_REGION() {
     system("color 0A");
    char ch1,ch2,ch3,ch4,ch5,province_name[100];
    int i = 0, c, j, d = 0, e = 0, f = 0, province_num, n, foundID = 0;
    FILE *fp_ADD; // declaring a file pointer
    FILE *fp_DELETE; // declaring a file pointer
    FILE *fp_TEMP; // declaring a file pointer
    FILE *fp_RECOVER; // declaring a file pointer
    FILE *fp_EDIT; // declaring a file pointer
    FILE *fp_LIST_AVAILABLE;
    FILE *fp_READ1, *fp_READ2, *fp_READ3, *fp_READ4, *fp_TRANSFER; // declaring a file pointer
    fp_READ1 = fopen("REGION14_PROVINCES.txt","r"); // opening a file for reading
    if(fp_READ1 == NULL) { // checking if the file is in the location
        printf("The file REGION14_PROVINCES.txt was not found!\n");
        exit(1);
    }else {
       printf("\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       printf("\t\t\t\t\t  \xb        ARMM_REGION PROVINCES        \xb\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       while(fscanf(fp_READ1,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // reading a file until the end of file
            i++;
       }
        for(c = 0; c < i; c++) {
            for(j = c + 1; j < i; j++) {
                if(r1_p[c].PROVINCE_ID > r1_p[j].PROVINCE_ID) {
                    swap = r1_p[c];
                    r1_p[c] = r1_p[j];
                    r1_p[j] = swap;
                }
            }
        }
        fp_TRANSFER = fopen("REGION14_PROVINCES.txt","w");
        for(c = 0; c < i; c++) {
            fprintf(fp_TRANSFER,"%d %s\n",r1_p[c].PROVINCE_ID,r1_p[c].PROVINCE_NAME);
        }
        fclose(fp_TRANSFER);
        fclose(fp_READ1);
        fp_READ2 = fopen("REGION14_PROVINCES.txt","r");
           while(fscanf(fp_READ2,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                printf("\n\t\t\t\t\t  [%d]     %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                d++;
           }
        fclose(fp_READ2);
        printf("\n\n");
        printf("\t\t\t\t\t  ---------------------------------------\n");
        fflush(stdin); // avoid jumping to another input
        printf("\t\t\t\t\t  Continue to ADD, DELETE, EDIT?[Y/N]: ");
        scanf("%c",&ch1);
       if(ch1 == 'Y' || ch1 == 'y') {
            system("cls"); // used to clear the previous screen
            printf("\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [1]ADD           \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [2]DELETE        \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [3]EDIT          \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\n");
            printf("\t\t\t\t\t      Choose [n] to operate: ");
            scanf("%d",&i);
            switch(i) { // switch cases for choosing a menu
            case 1: // CASE FOR ADD PROVINCE
                    fp_ADD = fopen("REGION14_PROVINCES.txt","a"); // opening a file for append
                    if(fp_ADD == NULL) { // checking if the file is in the location
                        printf("The file was not found!\n");
                        exit(1);
                    }else {
                        system("cls"); // used to clear the previous screen
                        printf("\n\t\tUsed underscore '_' or any character when you add a province name with a spaces to avoid (error)!");
                        printf("\n\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb              [1]ADD               \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    Enter province unique number to add: ");
                        scanf("%d",&province_num); // enter province id
                        fp_READ3 = fopen("REGION14_PROVINCES.txt","r"); // opening file for reading
                        while(fscanf(fp_READ3,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) { // scanning to the file
                            e++;
                        }
                        for(j = 0; j < e; j++) {
                            if(province_num == r1_p[j].PROVINCE_ID) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province ID you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                ARMM_REGION(); // call the function
                                break;
                            }
                        }
                        fclose(fp_READ3); // closing the file
                        printf("\n");
                        fflush(stdin); // avoid  jumping to another
                        printf("\t\t\t\t\t    Enter province name to add: ");
                        scanf("%s",&province_name); // enter province name
                        fp_READ4 = fopen("REGION14_PROVINCES.txt","r"); // opening file
                        while(fscanf(fp_READ4,"%d %s", &r1_p[i].PROVINCE_ID, &r1_p[i].PROVINCE_NAME) != EOF) { // scanning to the file
                            i++;
                        }
                        for(j = 0; j < i; j++) {
                            if(strcmp(province_name,r1_p[j].PROVINCE_NAME) == 0) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province NAME you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                ARMM_REGION(); // call the function
                                break;
                            }
                        }
                        fprintf(fp_ADD,"%d %s\n",province_num,province_name); // printing to the file
                        fclose(fp_ADD); // closing file
                        fclose(fp_READ4); // closing file fo adding provinces
                        printf("\n");
                        fflush(stdin); // avoid input jumping in to another
                        printf("\t\t\t\t\t    Add another province? or Back?[Y/N/B]: ");
                        scanf("%c",&ch1);
                        if(ch1 == 'Y' || ch1 == 'y') {
                            system("cls"); // used to clear the previous screen
                            ARMM_REGION(); // call again the function if condition is true
                        }else if(ch1 == 'B' || ch1 == 'b') {
                            system("cls"); // used to clear the previous screen
                            ARMM_REGION(); // call again the function if condition is true
                        }else {
                            system("cls"); // used to clear the previous screen
                            MENU(); // call main function if condition is false
                        }
                    }
                break;
            case 2: // CASE FOR DELETE PROVINCE
                    fp_LIST_AVAILABLE = fopen("REGION14_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE  == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]DELETE PROVINCE        \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to delete[!]::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // list of all province that available to delete
                             printf("\t\t\t\t\t    [%d] %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      -----------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to delete: ");
                        scanf("%d",&n);
                        fp_DELETE = fopen("REGION14_PROVINCES.txt","r");
                        printf("\n");
                        while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                            if(n == r1_p[d].PROVINCE_ID) {
                               foundID = 1;
                            }
                            d++;
                        }
                        fclose(fp_DELETE);
                        if(foundID == 1) {
                            fp_DELETE = fopen("REGION14_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION14_TEMP.txt","w");
                            foundID = 0;
                           while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[d].PROVINCE_ID) == 0 ) {
                                   fprintf(fp_TEMP,"%d %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                                }
                                d++;
                            }
                            fclose(fp_DELETE);
                            fclose(fp_TEMP);
                            remove("REGION14_PROVINCES.txt");
                            rename("REGION14_TEMP.txt","REGION14_PROVINCES.txt");
                            printf("\n");
                            system("cls");
                            system("color 0C");
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Deleting please wait");
                            for(c = 0; c < 3; c++) {
                                printf(".");
                                Sleep(600);
                            }
                            system("cls");
                        }else {
                            fflush(stdin);
                            printf("\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                ARMM_REGION();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t    Delete another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            ARMM_REGION();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            ARMM_REGION();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            case 3: // CASE FOR EDIT
                    fp_LIST_AVAILABLE = fopen("REGION14_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]EDIT PROVINCE          \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to edit::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) {
                            printf("\t\t\t\t\t    [%d]   %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      ---------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to edit: ");
                        scanf("%d",&n);
                        fp_EDIT = fopen("REGION14_PROVINCES.txt","r");
                        while(fscanf(fp_EDIT,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if(n == r1_p[d].PROVINCE_ID) {
                                   foundID = 1;
                                }
                            d++;
                        }
                        fclose(fp_EDIT);
                        if(foundID == 1) {
                            fp_EDIT = fopen("REGION14_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION14_TEMP.txt","w");
                            foundID = 0;
                            while(fscanf(fp_EDIT,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[e].PROVINCE_ID) == 1 ) {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       You choose [%s] to edit.\n\n",r1_p[e].PROVINCE_NAME);
                                    printf("\t\t\t\t\t       Edit province your selected: ");
                                    scanf("%s",&r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Editing please wait");
                                    for(j = 0; j < 3; j++) {
                                        printf(".");
                                        Sleep(600);
                                    }
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                }else {
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                }
                                e++;
                            }
                            fclose(fp_EDIT);
                            fclose(fp_TEMP);
                            remove("REGION14_PROVINCES.txt");
                            rename("REGION14_TEMP.txt","REGION14_PROVINCES.txt");
                        }else {
                            fflush(stdin);
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                ARMM_REGION();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        system("cls");
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       Edit another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            ARMM_REGION();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            ARMM_REGION();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            default:
                system("cls"); // used to clear the previous screen
                system("color 0C");
                printf("\n\n\n\n\n\n\n\n\t\t\t   NOTE[!]: You input an invalid menu please choose correctly to avoid error.");
                getch();
                system("cls"); // used to clear the previous screen
                ARMM_REGION(); // call function for validation
                break;
            } // closing brackets for switch(i)
       }else {
            system("cls"); // used to clear the previous screen
            MENU(); // call main function if condition is false
       } // closing bracket for if(ch1 == 'Y' || ch1 == 'y')
    } // fp_READ else closing bracket
}
void CAR_REGION() {
     system("color 0A");
    char ch1,ch2,ch3,ch4,ch5,province_name[100];
    int i = 0, c, j, d = 0, e = 0, f = 0, province_num, n, foundID = 0;
    FILE *fp_ADD; // declaring a file pointer
    FILE *fp_DELETE; // declaring a file pointer
    FILE *fp_TEMP; // declaring a file pointer
    FILE *fp_RECOVER; // declaring a file pointer
    FILE *fp_EDIT; // declaring a file pointer
    FILE *fp_LIST_AVAILABLE;
    FILE *fp_READ1, *fp_READ2, *fp_READ3, *fp_READ4, *fp_TRANSFER; // declaring a file pointer
    fp_READ1 = fopen("REGION15_PROVINCES.txt","r"); // opening a file for reading
    if(fp_READ1 == NULL) { // checking if the file is in the location
        printf("The file REGION15_PROVINCES.txt was not found!\n");
        exit(1);
    }else {
       printf("\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       printf("\t\t\t\t\t  \xb        CAR-REGION PROVINCES         \xb\n");
       printf("\t\t\t\t\t  \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
       while(fscanf(fp_READ1,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // reading a file until the end of file
            i++;
       }
        for(c = 0; c < i; c++) {
            for(j = c + 1; j < i; j++) {
                if(r1_p[c].PROVINCE_ID > r1_p[j].PROVINCE_ID) {
                    swap = r1_p[c];
                    r1_p[c] = r1_p[j];
                    r1_p[j] = swap;
                }
            }
        }
        fp_TRANSFER = fopen("REGION15_PROVINCES.txt","w");
        for(c = 0; c < i; c++) {
            fprintf(fp_TRANSFER,"%d %s\n",r1_p[c].PROVINCE_ID,r1_p[c].PROVINCE_NAME);
        }
        fclose(fp_TRANSFER);
        fclose(fp_READ1);
        fp_READ2 = fopen("REGION15_PROVINCES.txt","r");
           while(fscanf(fp_READ2,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                printf("\n\t\t\t\t\t  [%d]     %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                d++;
           }
        fclose(fp_READ2);
        printf("\n\n");
        printf("\t\t\t\t\t  ---------------------------------------\n");
        fflush(stdin); // avoid jumping to another input
        printf("\t\t\t\t\t  Continue to ADD, DELETE, EDIT?[Y/N]: ");
        scanf("%c",&ch1);
       if(ch1 == 'Y' || ch1 == 'y') {
            system("cls"); // used to clear the previous screen
            printf("\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [1]ADD           \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [2]DELETE        \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\t\t\t\t\t      \xb        [3]EDIT          \xb\n");
            printf("\t\t\t\t\t      \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
            printf("\n");
            printf("\t\t\t\t\t      Choose [n] to operate: ");
            scanf("%d",&i);
            switch(i) { // switch cases for choosing a menu
            case 1: // CASE FOR ADD PROVINCE
                    fp_ADD = fopen("REGION15_PROVINCES.txt","a"); // opening a file for append
                    if(fp_ADD == NULL) { // checking if the file is in the location
                        printf("The file was not found!\n");
                        exit(1);
                    }else {
                        system("cls"); // used to clear the previous screen
                        printf("\n\t\tUsed underscore '_' or any character when you add a province name with a spaces to avoid (error)!");
                        printf("\n\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb              [1]ADD               \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    Enter province unique number to add: ");
                        scanf("%d",&province_num); // enter province id
                        fp_READ3 = fopen("REGION15_PROVINCES.txt","r"); // opening file for reading
                        while(fscanf(fp_READ3,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) { // scanning to the file
                            e++;
                        }
                        for(j = 0; j < e; j++) {
                            if(province_num == r1_p[j].PROVINCE_ID) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province ID you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                CAR_REGION(); // call the function
                                break;
                            }
                        }
                        fclose(fp_READ3); // closing the file
                        printf("\n");
                        fflush(stdin); // avoid  jumping to another
                        printf("\t\t\t\t\t    Enter province name to add: ");
                        scanf("%s",&province_name); // enter province name
                        fp_READ4 = fopen("REGION15_PROVINCES.txt","r"); // opening file
                        while(fscanf(fp_READ4,"%d %s", &r1_p[i].PROVINCE_ID, &r1_p[i].PROVINCE_NAME) != EOF) { // scanning to the file
                            i++;
                        }
                        for(j = 0; j < i; j++) {
                            if(strcmp(province_name,r1_p[j].PROVINCE_NAME) == 0) {
                                system("cls"); // used to clear the previous screen
                                system("color 0C");
                                printf("\n\n\n\n\n\n\n\n\t  NOTE[!]: A province NAME you entered have a matched to another province please enter new one.");
                                getch();
                                system("cls"); // used to clear the previous screen
                                CAR_REGION(); // call the function
                                break;
                            }
                        }
                        fprintf(fp_ADD,"%d %s\n",province_num,province_name); // printing to the file
                        fclose(fp_ADD); // closing file
                        fclose(fp_READ4); // closing file fo adding provinces
                        printf("\n");
                        fflush(stdin); // avoid input jumping in to another
                        printf("\t\t\t\t\t    Add another province? or Back?[Y/N/B]: ");
                        scanf("%c",&ch1);
                        if(ch1 == 'Y' || ch1 == 'y') {
                            system("cls"); // used to clear the previous screen
                            CAR_REGION(); // call again the function if condition is true
                        }else if(ch1 == 'B' || ch1 == 'b') {
                            system("cls"); // used to clear the previous screen
                            CAR_REGION(); // call again the function if condition is true
                        }else {
                            system("cls"); // used to clear the previous screen
                            MENU(); // call main function if condition is false
                        }
                    }
                break;
            case 2: // CASE FOR DELETE PROVINCE
                    fp_LIST_AVAILABLE = fopen("REGION15_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE  == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]DELETE PROVINCE        \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to delete[!]::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) { // list of all province that available to delete
                             printf("\t\t\t\t\t    [%d] %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      -----------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to delete: ");
                        scanf("%d",&n);
                        fp_DELETE = fopen("REGION15_PROVINCES.txt","r");
                        printf("\n");
                        while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                            if(n == r1_p[d].PROVINCE_ID) {
                               foundID = 1;
                            }
                            d++;
                        }
                        fclose(fp_DELETE);
                        if(foundID == 1) {
                            fp_DELETE = fopen("REGION15_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION15_TEMP.txt","w");
                            foundID = 0;
                           while(fscanf(fp_DELETE,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[d].PROVINCE_ID) == 0 ) {
                                   fprintf(fp_TEMP,"%d %s\n",r1_p[d].PROVINCE_ID,r1_p[d].PROVINCE_NAME);
                                }
                                d++;
                            }
                            fclose(fp_DELETE);
                            fclose(fp_TEMP);
                            remove("REGION15_PROVINCES.txt");
                            rename("REGION15_TEMP.txt","REGION15_PROVINCES.txt");
                            printf("\n");
                            system("cls");
                            system("color 0C");
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Deleting please wait");
                            for(c = 0; c < 3; c++) {
                                printf(".");
                                Sleep(600);
                            }
                            system("cls");
                        }else {
                            fflush(stdin);
                            printf("\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                CAR_REGION();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Delete another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            CAR_REGION();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            CAR_REGION();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            case 3: // CASE FOR EDIT
                    fp_LIST_AVAILABLE = fopen("REGION15_PROVINCES.txt","r");
                    if(fp_LIST_AVAILABLE == NULL) {
                         printf("The file was not found!\n");
                         exit(1);
                    }else {
                        system("cls");
                        printf("\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n");
                        printf("\t\t\t\t\t    \xb         [2]EDIT PROVINCE          \xb\n");
                        printf("\t\t\t\t\t    \xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\xb\n\n");
                        printf("\t\t\t\t\t    ::Provinces available to edit::\n\n");
                        while(fscanf(fp_LIST_AVAILABLE,"%d %s",&r1_p[i].PROVINCE_ID,&r1_p[i].PROVINCE_NAME) != EOF) {
                            printf("\t\t\t\t\t    [%d]   %s\n",r1_p[i].PROVINCE_ID,r1_p[i].PROVINCE_NAME);
                            i++;
                        }
                        fclose(fp_LIST_AVAILABLE);
                        printf("\n\n");
                        printf("\t\t\t\t      ---------------------------------------------\n");
                        fflush(stdin);
                        printf("\t\t\t\t      Enter specific province unique number to edit: ");
                        scanf("%d",&n);
                        fp_EDIT = fopen("REGION15_PROVINCES.txt","r");
                        while(fscanf(fp_EDIT,"%d %s",&r1_p[d].PROVINCE_ID,&r1_p[d].PROVINCE_NAME) != EOF) {
                                if(n == r1_p[d].PROVINCE_ID) {
                                   foundID = 1;
                                }
                            d++;
                        }
                        fclose(fp_EDIT);
                        if(foundID == 1) {
                            fp_EDIT = fopen("REGION15_PROVINCES.txt","r");
                            fp_TEMP = fopen("REGION15_TEMP.txt","w");
                            foundID = 0;
                            while(fscanf(fp_EDIT,"%d %s",&r1_p[e].PROVINCE_ID,&r1_p[e].PROVINCE_NAME) != EOF) {
                                if((n == r1_p[e].PROVINCE_ID) == 1 ) {
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       You choose [%s] to edit.\n\n",r1_p[e].PROVINCE_NAME);
                                    printf("\t\t\t\t\t       Edit province your selected: ");
                                    scanf("%s",&r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Editing please wait");
                                    for(j = 0; j < 3; j++) {
                                        printf(".");
                                        Sleep(600);
                                    }
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                    system("cls");
                                }else {
                                    fprintf(fp_TEMP,"%d %s\n",r1_p[e].PROVINCE_ID,r1_p[e].PROVINCE_NAME);
                                }
                                e++;
                            }
                            fclose(fp_EDIT);
                            fclose(fp_TEMP);
                            remove("REGION15_PROVINCES.txt");
                            rename("REGION15_TEMP.txt","REGION15_PROVINCES.txt");
                        }else {
                            fflush(stdin);
                            printf("\n\n\n\n\n\n\n\n\t\t\t\t  Cant find specific province unique number! Continue[Y/N]: ");
                            scanf("%c",&ch5);
                            if(ch5 == 'Y' || ch5 == 'y'){
                                system("cls");
                                CAR_REGION();
                            }else {
                                system("cls");
                                MENU();
                            }
                        }
                        system("cls");
                        fflush(stdin);
                        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t       Edit another? or Back?[Y/N/B]: ");
                        scanf("%c",&ch4);
                        if(ch4 == 'Y' || ch4 == 'y') {
                            system("cls");
                            CAR_REGION();
                        }else if(ch4 == 'B' || ch4 == 'b') {
                            system("cls");
                            CAR_REGION();
                        }else {
                            system("cls");
                            MENU();
                        }
                    }
                break;
            default:
                system("cls"); // used to clear the previous screen
                system("color 0C");
                printf("\n\n\n\n\n\n\n\n\t\t\t   NOTE[!]: You input an invalid menu please choose correctly to avoid error.");
                getch();
                system("cls"); // used to clear the previous screen
                CAR_REGION(); // call function for validation
                break;
            } // closing brackets for switch(i)
       }else {
            system("cls"); // used to clear the previous screen
            MENU(); // call main function if condition is false
       } // closing bracket for if(ch1 == 'Y' || ch1 == 'y')
    } // fp_READ else closing bracket
}
