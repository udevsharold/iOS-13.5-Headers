/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMUnitTestLogger;

@interface IMUnitTestBundleLoader : NSObject {

	IMUnitTestLogger* _logger;

}

@property (readonly) IMUnitTestLogger * logger;              //@synthesize logger=_logger - In the implementation block
-(IMUnitTestLogger *)logger;
-(id)initWithLogger:(id)arg1 ;
-(BOOL)loadTestBundle:(id)arg1 bundle:(id*)arg2 error:(id*)arg3 ;
@end

