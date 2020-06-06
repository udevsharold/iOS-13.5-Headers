/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EFSignpostable.h>

@protocol EDSearchableIndexVerifierDataSource, OS_os_activity;
@class NSObject, NSString;

@interface EDSearchableIndexVerifier : NSObject <EFLoggable, EFSignpostable> {

	id<EDSearchableIndexVerifierDataSource> _dataSource;
	NSObject*<OS_os_activity> _indexVerificationActivity;

}

@property (nonatomic,retain) NSObject*<OS_os_activity> indexVerificationActivity;                    //@synthesize indexVerificationActivity=_indexVerificationActivity - In the implementation block
@property (assign,nonatomic,__weak) id<EDSearchableIndexVerifierDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long signpostID; 
+(id)log;
+(id)signpostLog;
-(id)initWithDataSource:(id)arg1 ;
-(id<EDSearchableIndexVerifierDataSource>)dataSource;
-(void)setDataSource:(id<EDSearchableIndexVerifierDataSource>)arg1 ;
-(unsigned long long)signpostID;
-(void)verifyDataSamplesWithCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)_failingSamples:(id)arg1 tester:(id)arg2 ;
-(void)_addFailingSamples:(id)arg1 toResultDictionary:(id)arg2 ;
-(id)_verifyDataSamples:(id)arg1 ;
-(id)_verifySamples:(id)arg1 ;
-(NSObject*<OS_os_activity>)indexVerificationActivity;
-(void)setIndexVerificationActivity:(NSObject*<OS_os_activity>)arg1 ;
@end

