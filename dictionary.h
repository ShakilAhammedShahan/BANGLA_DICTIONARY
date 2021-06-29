#include<stdio.h>
#include<string.h>

char dictionary[26][100000]={"abacas=compute#abandon=leave#abbreviate=compress#abdicate=give-up#abet=assist#abeyance=pending#abhor=loathe#abhorrent=hateful#abide=stand#ability=adeptness#ablaze=aflame#abnormal=deviant#abode=domicile#abolishuproot#abolition=terminating#aboriginal=native#abound=prevail#about=round#arounr=close#about-turn=reversal#above=overhead#above-board=openly#abroad=overseas#abrupt=hasty#absence=truancy#absent=away#absolute=perfect#absorbed=lost#absorbing=engaging#absurd=silly#appeal=entreat#application=use#apply=fasten#appoint=destine#appointment=date#appreciate=find#approach=near#approval=sanction#approve=often#aptitude=fitness#adept=dab#aversion=hate#applause=clapping#aperture=opening#appal=shock#",
	"babble=prattle#bad=evil#bear out=justify#but=unless#baby=infant#back=invest in,bet on#backbone=spine#backer=supporter,advocate#background=history,experience#backing=help,help#backlash=reaction,recoil#backward=bashful,reticent,shy#badly=poorly,defectively#carelessly#bag=sack,string bag#balance=ponder,weigh,estimate#ban=boycott,embargo,forbid#banal=trite,common#bad=strip,belt#bandu=company,platoon#banish=exile,expel,oust#banner=standard,flag#banquet=feast,lavish dinner#banter=railery,teasing#bar=rod,shaft,pole#barbarian=savage,lout,oaf,cold#barbarity=cruelty,inhumanity,ruthlessness#bare=naked,nude,stark naked#barefaced=open,blatant#barely=only,just,hardly#bargain=contract,agreement,compact#barren=childless,sterile,bare#barrier=bar,fence,wall#barring=excluding,exclusive,bar#bass=bottom,foot,support,stand#baseu=low,cowardly,selfish#bashful=shy,embrassed,meek#basic=key,elementary,root,central,focal#basis=base,footing,heart,foundation#batch=quantity,lot,volume#batter=hit,clout,belabour,pound,smite#battle=fight,conflict,combat,action#bauble=gewgaw,toy,plaything,knick-knack#bawdy=lewd,taboo,vulgar#bawl=shout,roar,keen#beach=shore,seaside,seashore#beacon=fire,light,bonfire,signal,very light#beam=timber,girder,rafter,bar#beamy=broad,wide,big,heavy,chubby,chunky#bearable=tolerable,supportable,endurable#",
	"cab=taxi#compute=abacas#cott=main,key#compress=abbreviate#cabal=plot,scheme#cabaret=club#cable=wire,line,rope#cabin=hut,shack,cottage#cache=hole,vault#cabaret=club,nightspot#cachet=stamp,feature#cadaver=body,remains,slang-stiff#caf=coffe bar,lunch-room,snack bar#cage=pound,coop#cajole=stroke,seduce#cajolery=coaxing,blandishment#cake=bun,dry,pastry#candy=sweet(s), bon-bon(s), sweetmeat(s)#cannibal=anthropophagite, man-eater#cant=hypocrisy, insincerity, sham, pretence, humbug#cantankerous=ill-natured, quarrelsome, perverse, cross, choleric#canvass= solicit, electioneer, campaign, poll#canyon=gorge, ravine, gully or gulley, pass#cap =hat, head covering#capable=able, competent, efficient, proficient#capacity=volume, content, size, dimensions#cape=headland, promontory, peninsula, neck, point#caper= skip, leap, spring, frolic, hop, gambol, frisk#capital= head, top, crown, cap:#capitulate=surrender, yield, give up, submit, succumb#capricious=whimsical, erratic, flighty, fickle, mercurial, unsteady#capsize=upset, overturn, turn turtle or upside down#captivate= enslave, fascinate, hypnotize#captive= prisoner, convict, hostage, detainee, internee#captivity=confinement, imprisonment, internment#capture= seizure, taking, catching, arrest#car=vehicle, motor car, automobile#card= playing-card, Slang pasteboard#cardinal=important, chief, key, special, main, central#care=anxiety, worry, trouble, anguish#careen=heel over, keel over#career= employment, occupation, calling#carefree=nonchalant, easy, easygoing, insouciant#careful=cautious, wary, circumspect#careless=unconcerned, untroubled, unworried#caress= pat, stroke, fondling, blandishment pat, stroke, fondling, blandishment#cargo=shipment, consignment, shiploadshipment, consignment, shipload#caricature=cartoon, parody, burlesque, lampoon#carnage=slaughter, butchery, massacre#carnal=fleshly, sensual, animal, bodily#carouse= make merry, revel, Colloq party#carp=find fault, criticize, cavil#carriage=coach#carrier= bearer, porter; transporter, drayman#carry= transport, convey, bear, lug#cart= handcart, pushcart, trolley, barrow#carve= hew, cut, sculpt, sculpture, shape#case= instance, example, event#cash= money, currency, bills, notes#casket= chest, box, container, case#cast= throw, toss, pitch, shy#",
	"dab=adept#dab=daub, pat, tap, tamp#dabble=dip, splash, spatter, sprinkle, bespatter#daft=foolish, silly, giddy, senseless#dagger=knife, poniard, skean, short sword, stiletto, dirk#daily=diurnal, circadian, everyday, quotidian#dainty=delicate, graceful, fine, elegant, exquisite, neat#damage=harm, injury, hurt, impairment, mutilation#damn=condemn, criticize, find fault with#damnable=awful, terrible, horrible, horrid#damp=clammy, moist, wettish; humid, dank, misty#dampen=damp, moisten, sprinkle, bedew#dance=cavort, gambol, caper, skip, leap, romp#dandy=fop, coxcomb, (gay) blade#danger=peril, risk, threat, hazard, jeopardy#dangerous=risky, perilous, hazardous, unsafe#dangerously=perilously, hazardously, unsafely, precariously#dangle=hang (down), droop, depend, swing, sway#dapper=neat, spruce, smart, trim, well-dressed#dapple=spotted, dotted, mottled, speckled, flecked#dare=challenge, defy, provoke#daredevil=exhibitionist, showman, stunt man#daring=courage, boldness, bravery, valour#dark=unlit, unlighted, unilluminated, ill-lighted, ill-lit#darling=sweetheart, beloved, love, dear, dearest#dash=crash, smash, shatter, break, shiver#dashing=spirited, lively, impetuous, energetic, vigorous#data=facts, information, statistics, figures, details, matter#date=time, year, season, period, day#daunt=intimidate, cow, discourage, dishearten#dauntless=fearless, undaunted, unafraid, unflinching#dawdle=linger, loiter, straggle, delay#dawn=daybreak, sunrise, break of day#day=daytime, daylight, broad daylight#day-dream=reverie, wool-gathering, fantasy, fancy#daylight=sunlight, sun, sunshine, light#daze=stun, stupefy, blind, dazzle, bedazzle#dazzle=impress, bewitch, enchant#dazzling=bright, brilliant, resplendent, blinding#dead=deceased, defunct, extinct, gone#deaden=numb, benumb, paralyse, anaesthetize, desensitize#deadlock=standstill, impasse, stalemate, stand-off#deadly=lethal, fatal#deaf=hard of hearing, stone-deaf#deal=distribute, dole out, give out, parcel out#dealer=trader, businessman, businesswoman#dealings=business, commerce, exchange, trade#dear=beloved, loved, adored, darling#dearly=greatly, very much, indeed, sincerely#dearth=scarcity, want, need, lack, deficiency#death=demise, decease, passing, dying, end#deathless=eternal, everlasting, immortal, undying#debase=lower, degrade, devalue, depreciate, depress#debatable=controversial, arguable, questionable#debate=discussion, argument, dispute#debonair=suave, soign‚(e), elegant, urbane#debt=obligation; due, indebtedness, liability#decadent=declining, decaying, deteriorating, debased#decay=decline, wane, ebb, dwindle#deceit=deception, deceitfulness, fraud, fraudulence, cheating#",
	"each=every#evil=bad#eager=avid, zealous, ardent, earnest, keen#eagerness=avidity, zeal, earnestness, keenness#eagle-eyed=sharp-eyed, sharp-sighted, keen-eyed#ear=attention, heed, notice, regard#early=beforehand, ahead (of time), prematurely#earn=merit, deserve, be worthy of, be entitled to#earnest=serious, solemn, grave, sober#earnings=wages, salary, income#earth=globe, mother earth, planet, world#earthly=terrestrial, terrene, telluric#earthy=ribald, bawdy, unrefined#ease=comfort, repose, well-being#easily=smoothly, effortlessly, readily, simply#easy=simple, effortless, plain, clear#easygoing=relaxed, casual, mellow#eat=dine, lunch, breakfast, sup#eavesdrop=listen in, tap, overhear#ebb=recede, flow back, subside#ebullient=bubbling, overflowing, effervescent#eccentric=unconventional, unusual, uncommon#eccentricity=unconventionality, unusualness, uncommonness#edition=number, issue, printing, print run#editor=rewrite man or woman, rewriter#editorial=Brit leader, leading article#educate=teach, train, instruct, edify, tutor#educated=cultivated, cultured, erudite#education=teaching, schooling, training, instruction#educational=academic, scholastic, pedagogical#eerie=frightening, weird, strange, uncanny#effect=result, consequence#effective=effectual, efficacious#effects=belongings, (personal) property, gear#effectual=effective, efficacious, efficient#effectuate=bring about, effect, carry out, implement#effeminate=unmanly, womanish, womanly#effervescent=bubbling, fizzy, carbonated#effort=exertion, striving, struggle#effortless=smooth, trouble-free, uncomplicated#effrontery=impertinence, impudence, audacity#effusive=demonstrative, gushing, (over)enthusiastic#egoistic=egoistical, self-centred, egocentric#egotistical=egotistic, conceited, proud, overweening#eject=force or drive out, expel#elapse=away, pass away#elastic=flexible, stretchable, stretchy#end=extremity, extreme, extent, bound#",
	"fab=wonder#Fine=good#factor=constituent, ingredient, element#factory=works, mill, plant#factual=actual, real, true, authentic, verifiable, realistic#faculty=ability, capacity, skill, aptitude#ability, capacity, skill, aptitude#fad=craze, mania, rage, fashion, trend, fancy#fade=bleach, whiten, etiolate#fag=exhaust, weary, tire#fail=",
                         "good=Fine#","hate=aversion#",
                          "imply=mean#","justify=bear out#",
                          "key=main,cott#","link=communication#",
                          "maximum=highest#","negate=undo#",
	"outcome=effect#",
	"partner=shareholder#",
	"quite=fully#",
	"react=respond#",
	"send=address#shareholder=partner#",
	"taxi=cab#time=period#",
	"unless=but#undo=negate#",
	"vampire=vamp#",
	"water=aqua#wonder=fab#",
	"#",
    "ye=you#",
	"zero=blank#"};


char* findmeaning(char* search)
{
int len,i,j,count=0,p;
len=strlen(search);

int charindex;

if(search[0]>='a' &&  search[0]<='z')charindex=search[0]-'a';
else if (search[0]>='A' &&  search[0]<='Z')charindex=search[0]-'A';
else {
      printf("invalid word\n");
      char empty[2]="";
      return empty;
     }

	{
		for(i=0,j=0;;)
		{
			if(search[i]==dictionary[charindex][j])
			{
				i++;
				j++;
				count++;
			}
			else
			{
				i=0;
				j++;
				count=0;
			}
			if(count==len)
			{
				p=j-len;
				break;
			}
		}
		//printing

		char meaning[300];
		int index=0;
		for(i=p; dictionary[charindex][i]!='#'; i++)
		{
			printf("%c",dictionary[charindex][i]);
			meaning[index++]=dictionary[charindex][i];
		}
		meaning[index]=0;
		printf("\n");
		return meaning;
	}
	return "no meaning found";
}


/*void printmeaning(char search[50],char dictionary[26][200])
{

int len,i,j,count=0,p;
len=strlen(search);

int charindex;

if(search[0]>='a' &&  search[0]<='z')charindex=search[0]-'a';
else if (search[0]>='A' &&  search[0]<='Z')charindex=search[0]-'A';
else {
      printf("invalid word\n");
      return;
     }

	{
		for(i=0,j=0;;)
		{
			if(search[i]==dictionary[charindex][j])
			{
				i++;
				j++;
				count++;
			}
			else
			{
				i=0;
				j++;
				count=0;
			}
			if(count==len)
			{
				p=j-len;
				break;
			}
		}
		//printing
		for(i=p; dictionary[charindex][i]!='#'; i++)
		{
			printf("%c",dictionary[charindex][i]);
		}
		printf("\n");
	}

}*/

