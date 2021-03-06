/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NULayoutContext.h>
@class UITraitCollection;


@protocol NULayoutContext <NSObject>
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (getter=isLandscape,nonatomic,readonly) BOOL landscape; 
@property (nonatomic,readonly) CGRect bounds; 
@required
-(CGRect)bounds;
-(UITraitCollection *)traitCollection;
-(BOOL)isLandscape;

@end


@class UITraitCollection, NSString;

@interface NULayoutContext : NSObject <NULayoutContext> {

	UITraitCollection* _traitCollection;
	CGRect _bounds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (getter=isLandscape,nonatomic,readonly) BOOL landscape; 
@property (nonatomic,readonly) CGRect bounds;                                    //@synthesize bounds=_bounds - In the implementation block
-(NSString *)description;
-(CGRect)bounds;
-(UITraitCollection *)traitCollection;
-(BOOL)isLandscape;
-(id)initWithTraitCollection:(id)arg1 bounds:(CGRect)arg2 ;
@end

