/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CRKWebClipBundleIdentifier : NSObject {

	NSString* _stringValue;

}

@property (nonatomic,copy,readonly) NSString * stringValue;                                              //@synthesize stringValue=_stringValue - In the implementation block
@property (getter=isWebClipHostApplication,nonatomic,readonly) BOOL webClipHostApplication; 
@property (getter=isSpecificWebClip,nonatomic,readonly) BOOL specificWebClip; 
+(id)webClipBundleIdentifierInString:(id)arg1 ;
+(id)webClipHostApplicationBundleIdentifier;
+(id)specificWebClipPrefix;
+(id)bundleIdentifierByLocatingWebClipBundleIdentifierInString:(id)arg1 ;
-(id)init;
-(NSString *)stringValue;
-(id)initWithString:(id)arg1 ;
-(BOOL)isWebClipHostApplication;
-(BOOL)isSpecificWebClip;
@end
