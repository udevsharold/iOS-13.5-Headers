/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateFormatter;

@interface SiriUICardLogger : NSObject {

	NSDateFormatter* _dateFormatter;

}
+(id)_sharedInstance;
+(id)logCardData:(id)arg1 format:(unsigned long long)arg2 ;
+(id)logCard:(id)arg1 format:(unsigned long long)arg2 ;
+(id)logCardData:(id)arg1 ;
+(id)logCard:(id)arg1 ;
-(id)init;
-(id)_dateFormatter;
-(id)_nowString;
-(id)_currentFilenameForFormat:(unsigned long long)arg1 ;
@end

