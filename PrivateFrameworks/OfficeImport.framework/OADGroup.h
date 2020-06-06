/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADDrawable.h>
#import <libobjc.A.dylib/OADDrawableContainer.h>

@class NSMutableArray, NSString;

@interface OADGroup : OADDrawable <OADDrawableContainer> {

	CGRect mLogicalBounds;
	NSMutableArray* mChildren;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)addChild:(id)arg1 ;
-(id)children;
-(void)removeChild:(id)arg1 ;
-(void)addChildren:(id)arg1 ;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)childCount;
-(void)replaceChild:(id)arg1 with:(id)arg2 ;
-(CGRect)logicalBounds;
-(void)setLogicalBounds:(CGRect)arg1 ;
-(id)groupProperties;
-(void)removeUnnecessaryOverrides;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
@end

