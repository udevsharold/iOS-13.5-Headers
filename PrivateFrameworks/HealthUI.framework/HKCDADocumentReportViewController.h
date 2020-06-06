/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKViewController.h>
#import <libobjc.A.dylib/HKIncrementalSearchBarDelegate.h>

@class NSData, UIView, WKWebView, HKIncrementalSearchBar, NSMutableArray;

@interface HKCDADocumentReportViewController : HKViewController <HKIncrementalSearchBarDelegate> {

	BOOL _javascriptSearchInstalled;
	BOOL _javascriptIsRunning;
	BOOL _searchInProgress;
	NSData* _documentData;
	UIView* _disclosureView;
	WKWebView* _webView;
	HKIncrementalSearchBar* _incrementalSearchBar;
	long long _hitCount;
	long long _currentHighlightedHit;
	NSMutableArray* _javascriptOperationQueue;

}

@property (readonly) NSData * documentData;                                                //@synthesize documentData=_documentData - In the implementation block
@property (nonatomic,readonly) UIView * disclosureView;                                    //@synthesize disclosureView=_disclosureView - In the implementation block
@property (nonatomic,readonly) WKWebView * webView;                                        //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) HKIncrementalSearchBar * incrementalSearchBar;              //@synthesize incrementalSearchBar=_incrementalSearchBar - In the implementation block
@property (assign,nonatomic) BOOL javascriptSearchInstalled;                               //@synthesize javascriptSearchInstalled=_javascriptSearchInstalled - In the implementation block
@property (assign,nonatomic) BOOL javascriptIsRunning;                                     //@synthesize javascriptIsRunning=_javascriptIsRunning - In the implementation block
@property (assign,nonatomic) BOOL searchInProgress;                                        //@synthesize searchInProgress=_searchInProgress - In the implementation block
@property (assign,nonatomic) long long hitCount;                                           //@synthesize hitCount=_hitCount - In the implementation block
@property (assign,nonatomic) long long currentHighlightedHit;                              //@synthesize currentHighlightedHit=_currentHighlightedHit - In the implementation block
@property (nonatomic,retain) NSMutableArray * javascriptOperationQueue;                    //@synthesize javascriptOperationQueue=_javascriptOperationQueue - In the implementation block
+(id)xmlToHTMLTranslator;
-(WKWebView *)webView;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(NSData *)documentData;
-(void)setSearchInProgress:(BOOL)arg1 ;
-(BOOL)searchInProgress;
-(id)initWithDocumentData:(id)arg1 ;
-(void)searchBarDoneAction:(id)arg1 ;
-(void)_updateMatchDisplayString:(long long)arg1 numMatches:(long long)arg2 ;
-(void)searchBarUpAction:(id)arg1 ;
-(void)searchBarDownAction:(id)arg1 ;
-(void)searchBarChangeSearch:(id)arg1 searchString:(id)arg2 ;
-(void)startIncrementalSearch;
-(HKIncrementalSearchBar *)incrementalSearchBar;
-(void)hideDisclosure:(id)arg1 ;
-(id)buildDisclosureView;
-(void)_translateXMLInBackground;
-(void)_runJavascriptOperation:(id)arg1 clearQueuedCommands:(BOOL)arg2 ;
-(void)_finishJavascriptOperation;
-(void)_updateSearchHits:(long long)arg1 ;
-(void)_runJavascript:(id)arg1 clearQueuedCommands:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateSearchBarState;
-(void)_incrementCurrentHitBy:(long long)arg1 ;
-(UIView *)disclosureView;
-(BOOL)javascriptSearchInstalled;
-(void)setJavascriptSearchInstalled:(BOOL)arg1 ;
-(BOOL)javascriptIsRunning;
-(void)setJavascriptIsRunning:(BOOL)arg1 ;
-(long long)hitCount;
-(void)setHitCount:(long long)arg1 ;
-(long long)currentHighlightedHit;
-(void)setCurrentHighlightedHit:(long long)arg1 ;
-(NSMutableArray *)javascriptOperationQueue;
-(void)setJavascriptOperationQueue:(NSMutableArray *)arg1 ;
@end

