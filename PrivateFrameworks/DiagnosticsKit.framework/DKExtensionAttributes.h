/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSExtension, NSString;


@protocol DKExtensionAttributes
@property (nonatomic,readonly) NSExtension * extension; 
@property (getter=isHeadless,nonatomic,readonly) BOOL headless; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@required
-(NSString *)bundleIdentifier;
-(NSExtension *)extension;
-(id)initWithExtension:(id)arg1;
-(BOOL)isHeadless;

@end

