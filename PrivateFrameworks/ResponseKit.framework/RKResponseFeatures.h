/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RKResponseFeatures : NSObject {

	int _count;
	int _sameRecipientCount;
	NSString* _response;
	double _numOfElapsedDays;
	double _normalizedSourceAppCount;
	double _normalizedSourceNotificationCount;
	double _normalizedInputMethodCannedCount;
	double _normalizedInputMethodScribbleCount;
	double _normalizedInputMethodDictationCount;
	unsigned long long _responseLength;

}

@property (readonly) NSString * response;                                     //@synthesize response=_response - In the implementation block
@property (readonly) int count;                                               //@synthesize count=_count - In the implementation block
@property (readonly) double numOfElapsedDays;                                 //@synthesize numOfElapsedDays=_numOfElapsedDays - In the implementation block
@property (readonly) double normalizedSourceAppCount;                         //@synthesize normalizedSourceAppCount=_normalizedSourceAppCount - In the implementation block
@property (readonly) double normalizedSourceNotificationCount;                //@synthesize normalizedSourceNotificationCount=_normalizedSourceNotificationCount - In the implementation block
@property (readonly) double normalizedInputMethodCannedCount;                 //@synthesize normalizedInputMethodCannedCount=_normalizedInputMethodCannedCount - In the implementation block
@property (readonly) double normalizedInputMethodScribbleCount;               //@synthesize normalizedInputMethodScribbleCount=_normalizedInputMethodScribbleCount - In the implementation block
@property (readonly) double normalizedInputMethodDictationCount;              //@synthesize normalizedInputMethodDictationCount=_normalizedInputMethodDictationCount - In the implementation block
@property (readonly) unsigned long long responseLength;                       //@synthesize responseLength=_responseLength - In the implementation block
@property (readonly) int sameRecipientCount;                                  //@synthesize sameRecipientCount=_sameRecipientCount - In the implementation block
-(int)count;
-(NSString *)response;
-(id)initWithFeatures:(id)arg1 count:(int)arg2 numOfElapsedDays:(double)arg3 sourceAppCount:(double)arg4 sourceNotificationCount:(double)arg5 inputSourceCannedCount:(double)arg6 inputSourceScribbleCount:(double)arg7 inputSourceDictationCount:(double)arg8 responseLength:(unsigned long long)arg9 sameRecipientCount:(int)arg10 ;
-(double)numOfElapsedDays;
-(double)normalizedSourceAppCount;
-(double)normalizedSourceNotificationCount;
-(double)normalizedInputMethodCannedCount;
-(double)normalizedInputMethodScribbleCount;
-(double)normalizedInputMethodDictationCount;
-(unsigned long long)responseLength;
-(int)sameRecipientCount;
@end

