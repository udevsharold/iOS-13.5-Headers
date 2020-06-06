/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRegularExpression, AXMSpeechFormatterCache;

@interface AXMDataDetector : NSObject {

	NSRegularExpression* _emailAddressRegex;
	AXMSpeechFormatterCache* _speechFormatterCache;

}
-(void)_enumerateText:(id)arg1 textCheckingType:(unsigned long long)arg2 datatype:(unsigned long long)arg3 withBlock:(/*^block*/id)arg4 ;
-(id)emailAddressRegex;
-(void)_enumerateText:(id)arg1 regularExpression:(id)arg2 datatype:(unsigned long long)arg3 withBlock:(/*^block*/id)arg4 ;
-(id)initWithSpeechFormatterCache:(id)arg1 ;
-(void)enumerateText:(id)arg1 searchingFordatatypes:(id)arg2 withBlock:(/*^block*/id)arg3 ;
@end

