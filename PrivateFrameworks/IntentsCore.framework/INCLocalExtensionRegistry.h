/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface INCLocalExtensionRegistry : NSObject {

	NSMutableDictionary* _localExtensionsByIdentifier;

}
+(id)sharedInstance;
-(id)init;
-(void)registerLocalExtension:(id)arg1 ;
-(void)deregisterLocalExtension:(id)arg1 ;
-(id)localExtensions;
-(id)localExtensionForIdentifier:(id)arg1 ;
@end

