/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableArray, NSMutableDictionary, NSArray;

@interface SXComponents : NSObject <NSCopying, NSMutableCopying> {

	NSMutableArray* _components;
	NSMutableDictionary* _componentsByIdentifier;
	NSMutableDictionary* _childComponentsByParentIdentifier;

}

@property (nonatomic,readonly) NSMutableArray * components;                                          //@synthesize components=_components - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * componentsByIdentifier;                         //@synthesize componentsByIdentifier=_componentsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * childComponentsByParentIdentifier;              //@synthesize childComponentsByParentIdentifier=_childComponentsByParentIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allComponents; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)initWithArray:(id)arg1 ;
-(NSMutableArray *)components;
-(id)componentAtIndex:(unsigned long long)arg1 ;
-(void)addComponent:(id)arg1 ;
-(NSArray *)allComponents;
-(id)componentsForContainerComponentWithIdentifier:(id)arg1 ;
-(void)insertComponent:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)addComponentsFromArray:(id)arg1 ;
-(unsigned long long)indexOfComponent:(id)arg1 ;
-(id)componentForIdentifier:(id)arg1 ;
-(id)componentsForContainerComponentWithPath:(id)arg1 ;
-(NSMutableDictionary *)componentsByIdentifier;
-(NSMutableDictionary *)childComponentsByParentIdentifier;
@end

