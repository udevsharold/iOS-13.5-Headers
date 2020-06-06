/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileStoreDemoKit/MobileStoreDemoKit-Structs.h>
@interface MSDLogModel : NSObject {

	_sFILE* _logFP;

}

@property (assign) _sFILE* logFP;              //@synthesize logFP=_logFP - In the implementation block
+(id)sharedInstance;
-(void)logMessage:(id)arg1 ;
-(void)logWithFormat:(id)arg1 andArgs:(char*)arg2 ;
-(_sFILE*)logFP;
-(void)setLogFP:(_sFILE*)arg1 ;
-(id)fileNameForTodayUnder:(id)arg1 prefix:(id)arg2 ;
-(BOOL)enableLogToFile:(id)arg1 ;
-(BOOL)enableLogToFilesUnder:(id)arg1 prefix:(id)arg2 expireDays:(long long)arg3 ;
@end

