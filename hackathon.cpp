#include "header.hpp"

void antagonist()
{

    int decision = 0,
        ending = 0;
    Karma karmaStruct;
    printf("The year is 2038. You are Anthony Smith.\n You were an orphaned slave turned raider after nuclear fallout decimated the world, bitter and alone, Anthony seeks purpose in the pain of others.\n");

    system("pause");
    system("cls");

    printf("Anthony: Tommy (Raider), get you ass up. Don't got all day\n");
    Sleep(5000);
    printf("Tommy: zzzz, hmmmm, wwhazzat?\n");
    printf("Anthony: I told you yesterday, boss has been up in arms about the quotas this month, we need another shipment out by the"
        "end of the week else there will be hell to pay. So hurry up and get readyn\n");
    Sleep(5000);
    printf("Tommy: Jesus, no need to get you panties in a twist. Fine just let me get something to eat first\n");
    Sleep(5000);
    printf("\nEnter 1 to threated Tommy, Enter 2 to ignore");

    if (decision) // bad
    {
        printf("Anthony approaches Tommy with a nuetral expression, as he closes in, Tommy tries to take a step back as\n"
        "Anthony wraps a hand around his throat and idely twirls a pocket knife between his fingers.\n");
        printf("Anthony: I'm not here to play games Tommy, we have a job to do, and we'll damn well do it. If I don't see you outside in 3 minutes ready to go\n"
                "being hungry will be the least of your fucking concern, got it!\n");
        printf("As Anthony finished his exclamation, he stabbed into the wall right by Tommy's head, barely nicking his ear\n");
        printf("Anthony: Do I make myself clear?\n");
        printf("Tommy: ...yes boss, crystal\n");
        printf("Tommy stalkes away, both shaken and annoyed about the events that have transpired, "
            "Anthony sighs and strides away in the opposite direction.\n");
        karmaStruct.bad_deeds++;
       
        system("pause");
    }
    else // good
    {
        printf("Anthony: Whatever, be ready to go outside the compound in 10 minutes\n");
            karmaStruct.good_deeds++;
            
        Sleep(2000);
    }
    system("cls");

    printf("Time has passed since Tommy and Anthony's interaction, and the Raider group has all gathered, preparing to head out\n.");
    Sleep(200);
    printf("Brenda: Ready to go get some cows for the heard, Andy?\n");
    Sleep(5000);
    printf("Niel: It's a grim concept, stealing the lives of young men and women, forcing them to work in camps for the benefit of"
    "the others\n. Have we truly never evolved beyond this fundamental tope in society?\n");
    Sleep(5000);

    printf("How does Anthony feel about enslaving others for his gain?\n Enter 1 for bad\nEnter 2 for good");

    scanf("%d", &decision);
    if (decision)
    {
        printf("Anthony stares at Niel, a fellow raider and former philopsphy professor and says: Niel, shut the hell up\n"
            "You have absoluty no moral high ground to preach from\n");
        karmaStruct.bad_deeds++;
    }
        

    else
    {
        printf("Anthony: We do what we must, with what we got, don't gotta love it, just have to survive it.\n");
    }

        karmaStruct.good_deeds++;
          
    printf("The group look at each other, some with mistrust, others with tolerance. As they finish gearing up, they"
    "make the long treck\ntowcorethe old Milton town, word got by that a scavager group was spotted there. As the groups arrives, they dispurse themselves among the town\n"
    "stalking the empty stores, searching for the scavangers.\n");
    system("cls");
    printf("As Anthony rounds a corner by the general store, He spots a man loitering outside of a convience store who bares a stricking resembelence to himself.\n"
           "The name escapes him, but Anthony recognizes this man to be his brother, his twin to be percise. They share the same physical features,\n"
           "yet differ creatly in health and stature. Anothony carries his body with a slouch, and is rarely fed by the raider group itself, hallowed out features and empty eyes\n"
           "Yet his twin stands with back staight, full cheecks, and a healthy glow to his skin. Seperated at the age of 10\n"
           "Anthony never did get closure on his brothers fate, and he could think of no greater cruility then his golden child sibiling\n"
           "evading the fate that Anthony has suffered and thriving in life for it.\n");
        system("pause");
    printf("Full of anger and aggression, Anthony decide to capture his twin to meet the slave quota, if not for business, then simply out of spite.\n"
           "Anthony grabs the baseball bat strapped to his back, tapping it on his hand, he comes out of hiding and starts to approach his twin.\n"
           "The man makes eye contact with Anthony as Anthony holds his hands up in a surrenduring geasture, the man's stance relaxes as anthony approaches with a\n"
           "friendly smile. As Anthony comes with in few feet of the man, the man opens his mouth as if to say something, but the words never leave as Anthony clubs him over the heat with the bat.\n");
        system("pause");


    printf("A sick smile graces Anthony's face as he stares at his twin, who crumbles to the ground, unconcious. Shuffling could be heard from inside the sore his twin\n"
           "was standing in front of, Anthony hears \"Yo Jack, you good?\", Anthony, deciding that his brother was the priority on this mission now, nonchalantly picks up Jack onto his shoulder, walks a bit further away\n"
           "from the location, and shoots at a propane tank sitting outside of the convience store. The store erupts in flame, screams loud and shrill. The commotion causing the raiders to regroup outside of it.\n"
           "Anthony approaches them with Jack swung over his shoulder.\n");
    Sleep(4000);

    printf("Anthony: Sorry Brenda, had to cull your heard. Don't worry though, I brought it upon myself to spare the cash cow...\n");

    Sleep(1000);

    printf("As the scene fades to black, Anthony smiles with glee, looking at the raiders with a malice they have never seeen on him before.\n"
           "With a shudder shared amongst the group, the raiders begin making their way back to their compound. The fading screams of Anthony's victims\n"
           "signaling their exit.\n");
    system("pause");

    printf("Anthony and the rest of the raiders arrive back at the compound. And Anthony, completely ignoring the rest of his group,\n"
           "storms over to the holding cells. As he arrives he heaves Jack off his shoulder and onto the floor. Anthony eagerly sets up a chair\n"
           "outside of the cell, locking it. Waiting in anticipiation for his estranged brother to awaken.\n");
    system("pause");
    system("cls");
    printf("Some time after, Jack starts to regain consciousness. As he comes too, Anthony finally finds an oppritunity to speak\n"
           "to the brother he had thought died long ago.\n\n");
    printf("Anthony: Hey asshole, miss me?\n"
        "Jack: ...I know you, don't I?\n"
        "Anthony: You don't remember me? I'm hurt, truly. What would Mommy and Daddy say to how you so disrespectfully speak to your big brother?\n"
        "Jack: Wait... Anthony, your Anthony, aren't you?\n!"
        "Anthony: Bingo, nice job, thought I would have to hold your hand through out this conversation\n"
        "now that we have been properly \"introduced\" though, I ought to warn you that our renuin won't last long.\n"
        "Jack: What do you mean? We just found each other, thats good right?\n"
        "Anthony: For me? Yes, yes it is. Not for you though, no in fact, I'd say running into me, was the worst thing you could have done..."
        "Jack: Anthony, be honest. Do you plan to kill me? What happened, you were such a good brother. I loved you\n"
        "Anthony: I grew up, I saw what you, mom, and dad truly were. You were parasites, leaching off my hard work for the family, and what thanks did I get?\n"
        "Dad abandoning me for a couple of bucks from raiders. It may be too late for them to pay their debts, but I'll be damned if nobody pays\n"
        "Jack: ...I'm sorry Anthony, but there has been too much death today, I won't be just another check mark on your psycho bucket list\n\n\n\n\n\n");
    system("pause");
    system("cls");
    printf("In the distance, gunshots ring out, and screams for Jack's name can be heard\n"
           "Jack: Oops, sorry Anthony, I forgot to tell you my friends are coming over\n");
    printf("With that said, Jack shoves open the gate with gusto as he starts sprinting out of into the cooridor. With a start, Anthony relizes that Jack dropped a\n"
           "makeshift lockpick onto the ground. Furious, Anthony sprints after Jack, pulling out his pistol as he rounds a corner and aims down the hallway\n");
    Sleep(5000);
    ending = randomKarma(karmaStruct);

    printf("Anthony: End of the line Jack, save me a seat in Hell\n");
    if (ending < 7.5)
    {
        printf("With that, Anthony aims his pistol at Jack's back, the shot rings true as it pierces the back of Jack's head\n"
               "ensuring that there is only one twin left in this compound with the last name Smith");
    }
    else
    {
        printf("With that, Anthony aims his pistol at Jack's back, his hand shakes with anticipation as he fires his shot, missing Jack by mere inches\n"
               "Jacks voice rings down the hallway as he screams \"This isn't over Anthony! I'm not going to let it end like this\"\n",
               "Anthony whispers : Damn you Jack, you were alsways a fighter, better than Ma and Pa\n");
    }
}



  
    void protagonist()
{
   //Dialouge Selection Variables
    int selection1, selection2, selection3, random;
    Karma karmaStruct;
    system("cls");
    printf("The year is 2038. Your name is Jack Smith.\n You are a survivor of nuclear fallout and have joined a small, \nbut thriving community that has taken refuge in Walla Walla at the Washington State Penitentiary.\n");
   
    system("pause");
    system("cls");

    printf("James (group leader): \"Hey Jack\"\n");
    Sleep(3000);
    printf("Jack (You): \"What do you want now James?\"\n");
    Sleep(3000);
    printf("James: \"Our supplies are running low, we need to go on a supply run soon, and knock that attitude off before I fix it for you\"\n");
    Sleep(3000);
    printf("1.) \"Alright I don't need you lecturing me. Lets get going if were going to be back before sunset.\"\n2.)\"No, that aint my job, figure it out yourself \"Mr. Leader\".\"\n");
    scanf("%d", &selection1);
    if (selection1 == 1)
    {
        // "Alright I don't need you lecturing me. Lets get going if were going to be back before sunset."
        printf("James: \"Thats the attitude I like to hear, now hop in the truck\"");
        Sleep(5000);
        karmaStruct.good_deeds++;
        
    }
    if (selection1 == 2)
    {
        // "No, that aint my job, figure it out yourself "Mr. Leader"."
        printf("James: \"I haven't heard back talk like that for a long time, \nsounds like someone doesn't understand who is in charge here.\"\n");
        Sleep(3000);
        printf("Diana: \"If both of you don't get in this truck this instant,\n neither of you will be leader and you'll both be assigned to guard duty for 3 weeks\nNow get over it and hop in, NOW.\"\n");
        Sleep(5000);
        karmaStruct.bad_deeds++;
        
    }
    system("pause");
    system("cls");

    printf("You and your crew (You, James, Diana, and Daryl) leave the community in search of food and other supplies.\n");
    Sleep(3000);
    printf("You arive in an old town hoping to find some unscavanged supplies.\n");
    system("pause");
    system("cls");

    printf("James: \"Alright crew, lets try the convienence store first\"\n");
    Sleep(3000);
    printf("Diana: \"Dont you think that thats the first place looters would have gone\"\n");
    Sleep(3000);
    printf("James: \"I don't want to hear it, it's worth a shot, if its\nempty, then we can hear what your stupid plan is\"\n");
    Sleep(3000);
    printf("Diana: \"Your so unreasonable, are you coming Jack?\"\n");
    Sleep(3000);
    printf("1.) Go into store with crew\n2.) Refuse and stay outside in search of a better place\n");
    scanf("%d", &selection2);
    if (selection2 == 1)
    {
        // Go into store (You Lose)
        printf("James: \"Good choice, now lets go crew\"\n");
        Sleep(3000);
        system("pause");
        system("cls");
        printf("While in the store, your crew gets attacked by raiders.\nThey want your vehicle so they decide to burn the store down\nwhile you and your crew are still in there\n");
        Sleep(3000);
        printf("GAME OVER");
        system("pause");
        exit(0);
    }
    if (selection2 == 2)
    {
        // Stay out side (Safe)
        printf("James: \"While you wasting your time out here, I will be inside trying to help our people\"\n");
        Sleep(3000);
        printf("Your crew goes inside, leaving you outside alone.\n");
        Sleep(3000);
        system("pause");
        system("cls");
        karmaStruct.good_deeds++;
       
    }
    printf("While your crew is inside, you hear footsteps aproaching\n");
    Sleep(3000);
    printf("You turn your head to catch the person, but there is noone to be seen\n");
    Sleep(3000);
    printf("Jack: \"I could have swore I heard something, living in these conditions has turned me paranoid.\"\n");
    Sleep(3000);
    printf("BAM!!\n");
    Sleep(3000);
    printf("Your vision fades to black\n");
    Sleep(3000);
    system("pause");
    system("cls");
    printf("Before you could react, someone snuck up behind you and knocked you out.\n");
    system("pause");
    system("cls");
    printf("You wake up, only to realise you have been captured. You look around\nand notice that you are in some kind of prison cell. There is a man standing over you\njust outside the cell. He looks eerily familar and upon closer inspection you remember why.\n");
    system("pause");
    system("cls");
    printf("The face of you long lost brother, Anthony, is staring over you. Age\nhas changed him. He no longer has that smile stuck on his face.\nInstead it has been replaced by eyebags and a smoking habit.\nEven still you can clearly recognize that it is infact Anthony, your twin brother that you haven't seen since you were 10 years old.\n");
    Sleep(3000);
    printf("Anthony: \"Well, well, well, never thought I'd see you again. Wish it could\nhave been under better circumstances, but regardless I have some news for you.\nYou see I belong to a group of raiders, the same ones who have raised me since we were seperated, and\nwere a bit low on labor around here. I think I know just the guy for that, and I'm sure you'll be delighted to hear you will be working for free.\"\n");
    Sleep(3000);
    printf("1.) \"\Anthony, it has been so long. why would you do this\"\n2.) \"Go to hell Anthony, your no brother of mine\"\n");
    scanf("%d", &selection3);
    if (selection3 == 1)
    {
        // "Anthony, it has been so long. why would you do this"
        printf("Anthony: \"Because I..., no, we have to survive. Those who take, survive, as simple as that.\"\n");
        Sleep(3000);
        karmaStruct.good_deeds++;
       

    }
    if (selection3 == 2)
    {
        // "Go to hell Anthony, your no brother of mine"
        printf("Anthony: \"That's no way to talk to your long lost brother. Looks like ttime has made you bitter.\n You don't know the full story though so I'll clue you in. You see, mom and dad decided that paying of a few debts was\nmore important than their own son, or atleast their least favrite son.\"\n");
        Sleep(3000);
        printf("Jack: \"Anthony, I'm sorry I had no idea.\"\n");
        Sleep(3000);
        printf("Anthony: \"It does not matter anymore, all I'm here to do is survive, nothing else matters.\"\n");
        Sleep(3000);
     
        karmaStruct.good_deeds--;
       
    }

    printf("Anthony begins to heckle you. You notice that he\nis distracted so you begin to look for a way out. You notice that he is mistakenly\nstanding very close to the cell walls. You may be able to pickpocket his cell key\nif you are stealthy enough.\n");

    printf("1.) Attempt to steal his key \n2.) Give up\"\"\n");
    scanf("%d", &selection3);
    if (selection3 == 1)
    {
        // Attempt to pick pocket
        printf("You reach out to steal the key out of his pocket while he was distracted babbling on.\n");
        Sleep(3000);
        printf("You were...\n");
        Sleep(3000);
        karmaStruct.good_deeds++;
        random=randomKarma(karmaStruct);
        if (random <= 7.5)
        {
            printf("Sucessful!\n");
            Sleep(3000);
        }
        else if (random > 7.5)
        {
            printf("Unsucessful!\n");
            Sleep(3000);
            printf("Anthony catches you and decides you can't be trusted alive.");
            system("pause");
            system("cls");
            printf("GAME OVER");
            exit(0);
        }
    }
    if (selection3 == 2)
    {
        // give up
        printf("You live the rest of your life in slavery, wishing you would have taken the opportunity for freedom when you had the chance\n");
        Sleep(3000);
        system("pause");
        system("cls");
        printf("GAME OVER");
        system("pause");
        system("cls");
        exit(0);
    }
    system("pause");
    system("cls");

    printf("You bide your time carefully. You wait for Anthony to leave and you use your key to break out and run away.\nYou make your way to the exit and find yourself outside. The fence to the raiders outpost is in-sight.\nYou make an all out break for the fence and in your haste, you realize you are being shot at.\n Praying for your life you sprint as fast as you can towards the fence and jump it.\n Once outside you make your way back to your camp to warn the others.\nYou are safe for now.\n");
    system("pause");
    system("cls");
    printf("YOU WIN!!");
}


int randomKarma(Karma karma) 
{
    if (karma.good_deeds >= 2 && karma.bad_deeds <= 2)
    {
        return (rand() % 15 - karma.good_deeds) + 0;
    }
    else if (karma.bad_deeds >= 2 && karma.good_deeds >= 2)
    {
        return (rand() % 15 + karma.bad_deeds) + 0;
    }
    else
    {
        return (rand() % 15) + 0;
    }
}
