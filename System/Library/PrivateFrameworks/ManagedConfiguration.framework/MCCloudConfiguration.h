/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary;

@interface MCCloudConfiguration : NSObject {

	NSObject*<OS_dispatch_queue> _memberQueue;
	NSDictionary* _memberQueueDetails;
	NSDictionary* _memberQueueSetAsideDetails;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;               //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueDetails;                      //@synthesize memberQueueDetails=_memberQueueDetails - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueSetAsideDetails;              //@synthesize memberQueueSetAsideDetails=_memberQueueSetAsideDetails - In the implementation block
@property (nonatomic,copy) NSDictionary * details; 
@property (nonatomic,copy) NSDictionary * setAsideDetails; 
+(id)sharedConfiguration;
-(id)init;
-(id)region;
-(NSDictionary *)details;
-(int)userMode;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isSupervised;
-(BOOL)isProvisionallyEnrolled;
-(void)refreshDetailsFromDisk;
-(void)setMemberQueueDetails:(NSDictionary *)arg1 ;
-(void)setMemberQueueSetAsideDetails:(NSDictionary *)arg1 ;
-(NSDictionary *)memberQueueDetails;
-(NSDictionary *)memberQueueSetAsideDetails;
-(id)provisionalEnrollmentExpirationDate;
-(void)setDetails:(NSDictionary *)arg1 ;
-(NSDictionary *)setAsideDetails;
-(void)setSetAsideDetails:(NSDictionary *)arg1 ;
-(BOOL)isTeslaEnrolled;
-(BOOL)isAwaitingConfiguration;
-(id)mdmVersionProtocol;
-(id)diagnosticsUploadURL;
-(id)MAIDUsername;
-(BOOL)hasMAIDCredential;
-(BOOL)alreadySignedIntoFaceTime;
-(id)language;
-(id)languageScript;
-(id)tvProviderUserToken;
@end

