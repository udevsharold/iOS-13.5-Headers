/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CompassUI/CompassUI-Structs.h>
@class CompassImageNode, NSMutableDictionary;

@interface CompassAtlasManifest : NSObject {

	CompassImageNode* _rootNode;
	NSMutableDictionary* _items;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;              //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(id)initWithSize:(CGSize)arg1 ;
-(CGRect)addItem:(id)arg1 size:(CGSize)arg2 ;
-(CGRect)boundsForItem:(id)arg1 ;
@end
