/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>
#import <libobjc.A.dylib/INIntentHandlerProviding.h>

@class INExtensionContext, NSString;

@interface INExtension : NSObject <NSExtensionRequestHandling, INIntentHandlerProviding> {

	INExtensionContext* _extensionContext;

}

@property (nonatomic,readonly) INExtensionContext * _extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(INExtensionContext *)_extensionContext;
-(id)handlerForIntent:(id)arg1 ;
@end

