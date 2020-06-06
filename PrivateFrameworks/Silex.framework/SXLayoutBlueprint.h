/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SXComponentBlueprintFactory, SXUnitConverterFactory;
@class SXLayoutOptions, NSMutableDictionary, NSMutableArray, NSMutableSet, SXComponentDependencyResolver, NSOrderedSet;

@interface SXLayoutBlueprint : NSObject <NSCopying> {

	BOOL _isComplete;
	BOOL _updating;
	SXLayoutBlueprint* _parentLayoutBlueprint;
	SXLayoutOptions* _layoutOptions;
	id<SXComponentBlueprintFactory> _componentBlueprintFactory;
	id<SXUnitConverterFactory> _unitConverterFactory;
	NSMutableDictionary* _blueprint;
	NSMutableDictionary* _flattenedBlueprint;
	NSMutableArray* _orderedComponentIdentifiers;
	NSMutableSet* _invalidatedComponents;
	SXComponentDependencyResolver* _dependencySolver;
	NSOrderedSet* _snapLines;
	CGSize _blueprintSize;

}

@property (nonatomic,readonly) id<SXComponentBlueprintFactory> componentBlueprintFactory;              //@synthesize componentBlueprintFactory=_componentBlueprintFactory - In the implementation block
@property (nonatomic,readonly) id<SXUnitConverterFactory> unitConverterFactory;                        //@synthesize unitConverterFactory=_unitConverterFactory - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * blueprint;                                          //@synthesize blueprint=_blueprint - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * flattenedBlueprint;                                 //@synthesize flattenedBlueprint=_flattenedBlueprint - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedComponentIdentifiers;                             //@synthesize orderedComponentIdentifiers=_orderedComponentIdentifiers - In the implementation block
@property (assign,getter=isUpdating,nonatomic) BOOL updating;                                          //@synthesize updating=_updating - In the implementation block
@property (nonatomic,retain) NSMutableSet * invalidatedComponents;                                     //@synthesize invalidatedComponents=_invalidatedComponents - In the implementation block
@property (nonatomic,retain) SXComponentDependencyResolver * dependencySolver;                         //@synthesize dependencySolver=_dependencySolver - In the implementation block
@property (assign,nonatomic,__weak) SXLayoutBlueprint * parentLayoutBlueprint;                         //@synthesize parentLayoutBlueprint=_parentLayoutBlueprint - In the implementation block
@property (assign,nonatomic) CGSize blueprintSize;                                                     //@synthesize blueprintSize=_blueprintSize - In the implementation block
@property (nonatomic,retain) NSOrderedSet * snapLines;                                                 //@synthesize snapLines=_snapLines - In the implementation block
@property (nonatomic,readonly) SXLayoutBlueprint * rootLayoutBlueprint; 
@property (nonatomic,readonly) BOOL isComplete;                                                        //@synthesize isComplete=_isComplete - In the implementation block
@property (nonatomic,readonly) SXLayoutOptions * layoutOptions;                                        //@synthesize layoutOptions=_layoutOptions - In the implementation block
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isComplete;
-(void)setUpdating:(BOOL)arg1 ;
-(BOOL)isUpdating;
-(SXLayoutOptions *)layoutOptions;
-(void)endUpdates;
-(id)componentIdentifiers;
-(void)setBlueprint:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)blueprint;
-(id)componentsInRect:(CGRect)arg1 ;
-(CGSize)blueprintSize;
-(id)snapLinesIncludingChildren:(BOOL)arg1 ;
-(void)setSnapLines:(NSOrderedSet *)arg1 ;
-(id)componentBlueprintForComponentIdentifier:(id)arg1 includeChildren:(BOOL)arg2 ;
-(NSOrderedSet *)snapLines;
-(SXLayoutBlueprint *)rootLayoutBlueprint;
-(void)startUpdatesForWidth:(double)arg1 ;
-(void)setDependencySolver:(SXComponentDependencyResolver *)arg1 ;
-(id)componentBlueprintForComponentIdentifier:(id)arg1 ;
-(void)updatePosition:(CGPoint)arg1 forComponentWithIdentifier:(id)arg2 ;
-(id<SXUnitConverterFactory>)unitConverterFactory;
-(void)updateSize:(CGSize)arg1 forComponentWithIdentifier:(id)arg2 ;
-(void)invalidateSizeForComponentWithIdentifier:(id)arg1 ;
-(void)unregisterLayout:(id)arg1 ;
-(SXLayoutBlueprint *)parentLayoutBlueprint;
-(void)invalidatePositionForComponentWithIdentifier:(id)arg1 ;
-(void)setParentLayoutBlueprint:(SXLayoutBlueprint *)arg1 ;
-(void)invalidateDependentsOfInvalidatedComponents;
-(void)registerLayout:(id)arg1 sizer:(id)arg2 forComponent:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(void)invalidateSizeForComponentWithIdentifier:(id)arg1 suggestedSize:(CGSize)arg2 ;
-(id)containerComponentIdentifierContainingComponentWithIdentifier:(id)arg1 ;
-(SXComponentDependencyResolver *)dependencySolver;
-(void)invalidateDependentsOfComponentNode:(id)arg1 forDependencyResolver:(id)arg2 ;
-(void)invalidateBlueprint;
-(void)storeComponentsFromBlueprint:(id)arg1 inDictionary:(id)arg2 ;
-(id)layoutDescriptionForBlueprint:(id)arg1 depth:(unsigned long long)arg2 ;
-(id)initWithLayoutOptions:(id)arg1 componentBlueprintFactory:(id)arg2 unitConverterFactory:(id)arg3 ;
-(void)registerLayout:(id)arg1 sizer:(id)arg2 forComponent:(id)arg3 ;
-(void)invalidateBlueprintPosition;
-(void)setBlueprintSize:(CGSize)arg1 ;
-(id<SXComponentBlueprintFactory>)componentBlueprintFactory;
-(NSMutableDictionary *)flattenedBlueprint;
-(void)setFlattenedBlueprint:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)orderedComponentIdentifiers;
-(void)setOrderedComponentIdentifiers:(NSMutableArray *)arg1 ;
-(NSMutableSet *)invalidatedComponents;
-(void)setInvalidatedComponents:(NSMutableSet *)arg1 ;
@end

