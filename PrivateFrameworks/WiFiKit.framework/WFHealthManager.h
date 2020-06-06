/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFHealthManagerDelegate;
@class NSSet, WFInterface, NWPathEvaluator, WFNetworkScanRecord, WFNetworkProfile;

@interface WFHealthManager : NSObject {

	NSSet* _currentNetworkIssues;
	id<WFHealthManagerDelegate> _delegate;
	WFInterface* _interface;
	NWPathEvaluator* _evaluator;
	WFNetworkScanRecord* _network;
	WFNetworkProfile* _profile;

}

@property (nonatomic,retain) WFInterface * interface;                                   //@synthesize interface=_interface - In the implementation block
@property (nonatomic,retain) NSSet * currentNetworkIssues;                              //@synthesize currentNetworkIssues=_currentNetworkIssues - In the implementation block
@property (nonatomic,retain) NWPathEvaluator * evaluator;                               //@synthesize evaluator=_evaluator - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * network;                             //@synthesize network=_network - In the implementation block
@property (nonatomic,retain) WFNetworkProfile * profile;                                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) BOOL currentNetworkHasNoInternetConnection; 
@property (assign,nonatomic,__weak) id<WFHealthManagerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<WFHealthManagerDelegate>)delegate;
-(void)setDelegate:(id<WFHealthManagerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(WFInterface *)interface;
-(void)setInterface:(WFInterface *)arg1 ;
-(id)initWithInterface:(id)arg1 ;
-(WFNetworkScanRecord *)network;
-(void)setNetwork:(WFNetworkScanRecord *)arg1 ;
-(WFNetworkProfile *)profile;
-(void)setProfile:(WFNetworkProfile *)arg1 ;
-(NWPathEvaluator *)evaluator;
-(void)setEvaluator:(NWPathEvaluator *)arg1 ;
-(NSSet *)currentNetworkIssues;
-(void)setCurrentNetworkIssues:(NSSet *)arg1 ;
-(void)currentNetworkDidChange:(id)arg1 ;
-(void)linkQualityDidChange:(id)arg1 ;
-(void)_updateCurrentNetworkIssues;
-(BOOL)currentNetworkHasNoInternetConnection;
@end

