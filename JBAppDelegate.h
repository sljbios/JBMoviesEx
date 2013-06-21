//
//  JBAppDelegate.h
//  JBMoviesEx
//
//  Created by Steve Levin on 6/21/13.
//  Copyright (c) 2013 com.aaa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JBMovieListViewController.h"

@interface JBAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) JBMovieListViewController *movieListController;

@end
