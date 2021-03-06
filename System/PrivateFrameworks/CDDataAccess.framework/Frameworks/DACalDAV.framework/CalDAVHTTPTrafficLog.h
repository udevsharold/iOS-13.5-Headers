/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DACoreDAVLogger;

@interface CalDAVHTTPTrafficLog : NSObject {

	DACoreDAVLogger* _curLogger;

}

@property (nonatomic,retain) DACoreDAVLogger * curLogger;              //@synthesize curLogger=_curLogger - In the implementation block
+(id)instance;
-(id)init;
-(BOOL)enabled;
-(void)logString:(id)arg1 ;
-(void)logData:(id)arg1 ;
-(void)setCurLogger:(DACoreDAVLogger *)arg1 ;
-(DACoreDAVLogger *)curLogger;
-(void)finishSnippets;
-(void)logStringWithFormat:(id)arg1 ;
@end

