/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ISCreateAccountPromptOperation : ISOperation {

	long long _responseType;
	NSString* _reason;

}

@property (assign,nonatomic) long long responseType;              //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,retain) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
-(id)init;
-(void)run;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(long long)responseType;
-(void)setResponseType:(long long)arg1 ;
-(id)_newCreateAccountDialog;
-(long long)_mapCorrectSelectedButtonWithDialog:(id)arg1 ;
-(BOOL)_hasActiveICloudAccount;
@end

