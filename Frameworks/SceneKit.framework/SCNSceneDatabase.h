/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface SCNSceneDatabase : NSObject <NSSecureCoding> {

	NSMutableDictionary* _db;

}
+(BOOL)supportsSecureCoding;
+(id)lookUpKeyForObjectNamed:(id)arg1 class:(Class)arg2 ;
+(id)sceneDatabase;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addInstance:(id)arg1 withName:(id)arg2 class:(Class)arg3 ;
@end

