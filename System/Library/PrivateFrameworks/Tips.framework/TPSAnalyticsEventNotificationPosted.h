/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tips/TPSAnalyticsEvent.h>

@class NSNumber, NSString;

@interface TPSAnalyticsEventNotificationPosted : TPSAnalyticsEvent {

	NSNumber* _posted;
	NSNumber* _countdown;
	BOOL _landingPage;
	NSString* _contentID;
	NSString* _collectionID;
	NSNumber* _welcomeNumber;
	NSString* _errorCode;

}

@property (nonatomic,readonly) BOOL landingPage;                              //@synthesize landingPage=_landingPage - In the implementation block
@property (nonatomic,retain) NSString * contentID;                            //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,retain) NSString * collectionID;                         //@synthesize collectionID=_collectionID - In the implementation block
@property (nonatomic,readonly) NSNumber * notificationsPosted; 
@property (nonatomic,readonly) NSNumber * countdownToSoftOptout; 
@property (nonatomic,retain) NSNumber * welcomeNumber;                        //@synthesize welcomeNumber=_welcomeNumber - In the implementation block
@property (nonatomic,retain) NSString * errorCode;                            //@synthesize errorCode=_errorCode - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)resetCountdownToSoftOptout;
+(void)decrementCountdownToSoftOptout;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)eventName;
-(NSString *)errorCode;
-(void)setErrorCode:(NSString *)arg1 ;
-(NSString *)contentID;
-(void)setContentID:(NSString *)arg1 ;
-(void)setCollectionID:(NSString *)arg1 ;
-(NSString *)collectionID;
-(id)analyticsEventRepresentation;
-(BOOL)landingPage;
-(NSNumber *)notificationsPosted;
-(NSNumber *)countdownToSoftOptout;
-(NSNumber *)welcomeNumber;
-(id)initWithContentID:(id)arg1 collectionID:(id)arg2 welcomeNumber:(id)arg3 errorCode:(id)arg4 ;
-(void)setWelcomeNumber:(NSNumber *)arg1 ;
@end
