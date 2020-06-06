/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class NSArray, NSExtensionItem;

@interface WFNSExtensionItemContentItem : WFContentItem <WFContentItemClass> {

	NSArray* _extensionSubItems;

}

@property (nonatomic,retain) NSArray * extensionSubItems;                    //@synthesize extensionSubItems=_extensionSubItems - In the implementation block
@property (nonatomic,readonly) NSExtensionItem * extensionItem; 
+(id)typeDescription;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)itemWithObject:(id)arg1 sourceAppBundleIdentifier:(id)arg2 ;
-(id)name;
-(id)itemProviders;
-(NSExtensionItem *)extensionItem;
-(id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(BOOL)cachesSupportedTypes;
-(void)coerceToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)preloadImportantItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemProviderItems;
-(id)extensionItemName;
-(BOOL)itemProvidersSupportType:(id)arg1 ;
-(NSArray *)extensionSubItems;
-(void)setExtensionSubItems:(NSArray *)arg1 ;
@end

