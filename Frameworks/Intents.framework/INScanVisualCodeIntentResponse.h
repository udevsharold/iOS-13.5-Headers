/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INScanVisualCodeIntentResponseExport.h>

@class NSString;

@interface INScanVisualCodeIntentResponse : INIntentResponse <INScanVisualCodeIntentResponseExport>

@property (nonatomic,readonly) long long code; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_typeFromCode:(long long)arg1 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
-(id)init;
-(long long)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)propertiesByName;
-(id)_dictionaryRepresentation;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(long long)_intentResponseCode;
-(long long)_codeWithName:(id)arg1 ;
-(void)setPropertiesByName:(id)arg1 ;
@end

