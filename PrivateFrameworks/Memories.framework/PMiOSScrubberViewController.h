/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PMiOSScrubberCollectionViewDelegate.h>
#import <libobjc.A.dylib/PMScrubberProviderDelegate.h>

@class PMScrubberProvider, PMiOSScrubberCollectionView, UIView, NSString;

@interface PMiOSScrubberViewController : UIViewController <PMiOSScrubberCollectionViewDelegate, PMScrubberProviderDelegate> {

	PMScrubberProvider* _provider;
	PMiOSScrubberCollectionView* _collectionView;
	UIView* _playhead;

}

@property (assign,nonatomic,__weak) PMiOSScrubberCollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) UIView * playhead;                                         //@synthesize playhead=_playhead - In the implementation block
@property (nonatomic,retain) PMScrubberProvider * provider;                                    //@synthesize provider=_provider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProvider:(PMScrubberProvider *)arg1 ;
-(PMScrubberProvider *)provider;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(PMiOSScrubberCollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)itemWidth;
-(void)setCollectionView:(PMiOSScrubberCollectionView *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIView *)playhead;
-(void)touchesBegan;
-(void)touchesEnded;
-(void)playbackProgressDidChange:(double)arg1 provider:(id)arg2 ;
-(void)resultUpdated:(id)arg1 ;
-(void)setContentInsetWithSize:(CGSize)arg1 ;
-(void)updateScrollWithProgress:(double)arg1 ;
-(CGPoint)scrollViewPlayheadPosition;
-(double)scrollViewProgress;
-(void)setPlayhead:(UIView *)arg1 ;
@end

