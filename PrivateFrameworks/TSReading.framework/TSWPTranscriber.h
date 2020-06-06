/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSLocale;

@interface TSWPTranscriber : NSObject {

	NSString* _displayName;
	NSString* _identifier;
	NSString* _transformIdentifier;
	NSLocale* _romanizationLocale;

}

@property (readonly) NSLocale * romanizationLocale;              //@synthesize romanizationLocale=_romanizationLocale - In the implementation block
+(id)transcriberWithIdentifier:(id)arg1 displayName:(id)arg2 romanizationLocaleID:(id)arg3 transformIdentifier:(id)arg4 ;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 displayName:(id)arg2 romanizationLocaleID:(id)arg3 transformIdentifier:(id)arg4 ;
-(id)transcribeText:(id)arg1 withLocale:(id)arg2 ;
-(id)transcribeText:(id)arg1 ;
-(NSLocale *)romanizationLocale;
@end

