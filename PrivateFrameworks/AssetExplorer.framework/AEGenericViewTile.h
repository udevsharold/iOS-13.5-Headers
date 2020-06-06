/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>
#import <libobjc.A.dylib/PXReusableObject.h>

@class UIView, NSString;

@interface AEGenericViewTile : NSObject <PXUIViewBasicTile, PXReusableObject> {

	UIView* _view;

}

@property (nonatomic,retain) UIView * view;                         //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForReuse;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)becomeReusable;
@end

