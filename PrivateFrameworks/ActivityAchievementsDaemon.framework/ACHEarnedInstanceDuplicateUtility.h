/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACHTemplateStore, NSCalendar;

@interface ACHEarnedInstanceDuplicateUtility : NSObject {

	ACHTemplateStore* _templateStore;
	NSCalendar* _gregorianCalendar;

}

@property (assign,nonatomic,__weak) ACHTemplateStore * templateStore;              //@synthesize templateStore=_templateStore - In the implementation block
@property (nonatomic,retain) NSCalendar * gregorianCalendar;                       //@synthesize gregorianCalendar=_gregorianCalendar - In the implementation block
-(NSCalendar *)gregorianCalendar;
-(ACHTemplateStore *)templateStore;
-(void)setTemplateStore:(ACHTemplateStore *)arg1 ;
-(void)setGregorianCalendar:(NSCalendar *)arg1 ;
-(id)earnedInstancesWithoutDuplicates:(id)arg1 ;
-(id)earnedInstancesLimitedByEarnLimit:(id)arg1 ;
-(id)initWithTemplateStore:(id)arg1 ;
@end

