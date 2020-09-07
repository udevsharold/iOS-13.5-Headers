/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase;

@interface FCCKPrivateDatabaseOperation : FCOperation {

	BOOL _skipPreflight;
	BOOL _handleIdentityLoss;
	FCCKPrivateDatabase* _database;

}

@property (nonatomic,retain) FCCKPrivateDatabase * database;              //@synthesize database=_database - In the implementation block
@property (assign,nonatomic) BOOL skipPreflight;                          //@synthesize skipPreflight=_skipPreflight - In the implementation block
@property (assign,nonatomic) BOOL handleIdentityLoss;                     //@synthesize handleIdentityLoss=_handleIdentityLoss - In the implementation block
-(id)init;
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(FCCKPrivateDatabase *)database;
-(unsigned long long)maxRetries;
-(void)setSkipPreflight:(BOOL)arg1 ;
-(BOOL)skipPreflight;
-(BOOL)validateOperation;
-(BOOL)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(BOOL)handleIdentityLoss;
-(void)runChildCKOperation:(id)arg1 destination:(long long)arg2 ;
-(void)setHandleIdentityLoss:(BOOL)arg1 ;
@end
