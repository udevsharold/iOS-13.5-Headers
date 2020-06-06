/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FLFollowUpController, NSString;

@interface SUSFollowUpController : NSObject {

	FLFollowUpController* _followUpController;
	NSString* _identifier;

}

@property (nonatomic,retain) FLFollowUpController * followUpController;              //@synthesize followUpController=_followUpController - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
+(id)sharedController;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(FLFollowUpController *)followUpController;
-(void)setFollowUpController:(FLFollowUpController *)arg1 ;
-(id)getCurrentSUSFollowUpItem;
-(BOOL)isAutoUpdateFollowUpCurrentlyBeingPresented;
-(void)dismissFollowUp;
-(BOOL)isBadgeOnlyFollowUpCurrentlyBeingPresented;
-(void)postFollowUp:(id)arg1 ;
-(void)dismissBadgeOnlyFollowUp;
-(void)dismissAutoUpdateFollowUp;
-(BOOL)isFollowUpCurrentlyBeingPresented;
-(void)SUSFollowUpControllerBadgeSettings;
-(void)SUSFollowUpControllerUnbadgeSettings;
@end

