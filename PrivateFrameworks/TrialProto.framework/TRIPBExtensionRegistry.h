/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TrialProto-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface TRIPBExtensionRegistry : NSObject <NSCopying> {

	NSMutableDictionary* mutableClassMap_;

}
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addExtensions:(id)arg1 ;
-(void)addExtension:(id)arg1 ;
-(id)extensionForDescriptor:(id)arg1 fieldNumber:(long long)arg2 ;
@end

