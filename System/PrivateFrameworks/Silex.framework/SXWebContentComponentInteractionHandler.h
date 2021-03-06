/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentInteractionHandler.h>

@protocol SWInteraction;
@class NSString;

@interface SXWebContentComponentInteractionHandler : NSObject <SXComponentInteractionHandler> {

	id<SWInteraction> _interaction;

}

@property (nonatomic,readonly) id<SWInteraction> interaction;              //@synthesize interaction=_interaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SWInteraction>)interaction;
-(id)initWithInteraction:(id)arg1 ;
-(void)handleInteractionType:(unsigned long long)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
@end

