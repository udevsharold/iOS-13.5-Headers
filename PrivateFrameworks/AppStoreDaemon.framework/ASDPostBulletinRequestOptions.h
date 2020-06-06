/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSString, NSURL, NSDate;

@interface ASDPostBulletinRequestOptions : ASDRequestOptions {

	NSString* _actionButtonTitle;
	NSURL* _actionButtonURL;
	NSDate* _creationDate;
	unsigned long long _destinations;
	NSURL* _launchURL;
	NSString* _message;
	NSString* _recordID;
	NSString* _title;

}

@property (nonatomic,copy) NSString * actionButtonTitle;                   //@synthesize actionButtonTitle=_actionButtonTitle - In the implementation block
@property (nonatomic,copy) NSURL * actionButtonURL;                        //@synthesize actionButtonURL=_actionButtonURL - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                          //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) unsigned long long destinations;              //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,copy) NSURL * launchURL;                              //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,copy) NSString * message;                             //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * recordID;                            //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)recordID;
-(void)setCreationDate:(NSDate *)arg1 ;
-(unsigned long long)destinations;
-(void)setDestinations:(unsigned long long)arg1 ;
-(void)setRecordID:(NSString *)arg1 ;
-(NSURL *)launchURL;
-(void)setLaunchURL:(NSURL *)arg1 ;
-(void)setActionButtonTitle:(NSString *)arg1 ;
-(NSString *)actionButtonTitle;
-(NSURL *)actionButtonURL;
-(void)setActionButtonURL:(NSURL *)arg1 ;
@end

