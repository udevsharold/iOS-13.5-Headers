/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, VSDeveloperServiceConnection;

@interface VSDeveloperIdentityProviderFetchAllOperation : VSAsyncOperation {

	VSOptional* _result;
	VSDeveloperServiceConnection* _connection;

}

@property (nonatomic,retain) VSOptional * result;                                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) VSDeveloperServiceConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(VSOptional *)result;
-(VSDeveloperServiceConnection *)connection;
-(void)setResult:(VSOptional *)arg1 ;
-(void)setConnection:(VSDeveloperServiceConnection *)arg1 ;
-(void)executionDidBegin;
@end
