//
//  SRReporter.h
//  ShakeReport
//
//  Created by Jeremy Templier on 5/29/13.
//  Copyright (c) 2013 Jeremy Templier. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIWindow+SRReporter.h"
#import <MessageUI/MessageUI.h>
#import <MessageUI/MFMailComposeViewController.h>
#import "SRReportViewController.h"



@interface SRReporter : NSObject <MFMailComposeViewControllerDelegate, UINavigationControllerDelegate, SRReportViewControllerDelegate, NSURLConnectionDataDelegate>


@property (nonatomic, copy) NSString *defaultEmailAddress;
@property (nonatomic, copy) NSString * ccEmailAddress;
@property (nonatomic, copy) NSURL *backendURL;
@property (nonatomic, copy) NSString *applicationToken;
@property (nonatomic, assign) BOOL lastSessionCrashed;
@property (nonatomic, assign) BOOL displayReportComposerWhenShakeDevice;
@property (nonatomic, assign) BOOL recordsCrashes;

+ (instancetype)reporter;

- (BOOL)canSendNewReport;

- (void)onCrash:(NSException *)exception;

- (void)startListenerConnectedToBackendURL:(NSURL *)url;
- (void)startListener;

- (void)stopListener;

- (void)setCustomInformationBlock:(NSString* (^)())block;

- (void)setMailComposerCustomizer:(void (^)(MFMailComposeViewController * mailComposer))block;

- (void)addAttachmentsToMailComposer:(MFMailComposeViewController *)mailComposer;
- (void)addAttachmentsToMailComposer:(MFMailComposeViewController *)mailComposer addImage:(BOOL)attachImage;

/**
 Display one of the report composer (depends on the settings).
 Call this method if you want to link a button to the action of creating a new report.
 **/
- (void)displayReportComposer;
- (void)displayReportComposer:(BOOL)attachImage;

- (void)showMailComposer;
- (void)showMailComposer:(BOOL)attachImage;

- (void)viewControllerDidPressCancel:(UIViewController *)viewController;


@end
